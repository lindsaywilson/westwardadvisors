jQuery(document).ready(function($){
	
  $('.view .views-field-field-header-image img').removeAttr('width').removeAttr('height');
  
  $('ul#nice-menu-1').mobileSelect({
  	useWindowWidth: true,
	autoHide: false,
	deviceWidth: 740
  })
  
  
  // Add updated file highlight to client name heading
  $('.view-clients .view-content .views-row').each( function(){
  	html = $(this).html();
	if(html.search('new-file') != -1){
		$(this).find('.views-field-uid').empty().text('New Document Added');
	}
	if(html.search('updated-file') != -1){
		$(this).find('.views-field-uid').empty().text('Document Updated');
	}
  });
  
  
  // Add new file highlight to stage heading
  $('.view-client-files .view-grouping-content').each( function(){
	isrecent = 0;	  	
	$(this).find('.views-row').each( function(){
		if($(this).find('.new-file').length > 0){
			isrecent = 1;
		}
	});
	if(isrecent == 1){
		header = $(this).prev().find('div');
		header.html(header.text()+'<span class="new">New Document Added</span>');
	}	
  });
  
  // Add updated file highlight to stage heading
  $('.view-client-files .view-grouping-content').each( function(){
	isupdated = 0;	  	
	$(this).find('.views-row').each( function(){
		if($(this).find('.updated-file').length > 0){
			isupdated = 1;
			$(this).find('a.client_file').addClass('updated');
		}
	});
	if(isupdated == 1){
		header = $(this).prev().find('div');
		header.find('.new').empty();
		header.html(header.text()+'<span class="new">Document Updated</span>');
	}	
  });
  
  
  // Add new file highlight to Policy/Loan Doc heading
  $('.view-client-files.view-display-id-policy_documents_advisor, .view-client-files.view-display-id-policy_documents_client, .view-client-files.view-display-id-loan_documents_advisor, .view-client-files.view-display-id-loan_documents_client').each( function(){
	isrecent = 0;	  	
	$(this).find('.views-row').each( function(){
		if($(this).find('.new-file').length > 0){
			isrecent = 1;
		}
	});
	if(isrecent == 1){
		header = $(this).find('h3 div');
		header.html(header.text()+'<span class="new">New Document Added</span>');
	}	
  });
  
  // Add updated file highlight to Policy/Loan Doc heading
  $('.view-client-files.view-display-id-policy_documents_advisor, .view-client-files.view-display-id-policy_documents_client, .view-client-files.view-display-id-loan_documents_advisor, .view-client-files.view-display-id-loan_documents_client').each( function(){
	isupdated = 0;	  	
	$(this).find('.views-row').each( function(){
		if($(this).find('.updated-file').length > 0){
			isupdated = 1;
			$(this).find('a.client_file').addClass('updated');
		}
	});
	if(isupdated == 1){
		header = $(this).find('h3 div');
		header.find('.new').empty();
		header.html(header.text()+'<span class="new">Document Updated</span>');
	}	
  });


  
  // Show/Hide toggle on client files groupings
  $('h2.user-toggle a').click(function(){
  	$(this).parents('.views-row').first().children().find('.view-client-files').slideToggle('fast');
	return false;
  });
  $('h2.advisor-toggle a').click(function(){
  	$(this).parents('.views-row').find('.views-field-uid').slideToggle('fast');
	return false;
  });
  $('.view-client-files .view-grouping-header, .view-client-files .view-grouping-content h3, .view-client-files.view-display-id-policy_documents_advisor h3, .view-client-files.view-display-id-policy_documents_client h3, .view-client-files.view-display-id-loan_documents_advisor h3, .view-client-files.view-display-id-loan_documents_client h3').click( function(){
	  $(this).next().slideToggle('fast');
  });
  
  
  
  $(window).resize(function(){
	
	if(!$('.mobileselect').length>0){
		$('ul#nice-menu-1').mobileSelect({
			useWindowWidth: true,
			autoHide: false,
			deviceWidth: 740
		})		
	}
	
  });
  
  	function checkFields(){
		$('#user-login-form .form-item').each( function(){
			var input = $(this).find('input');
			var label = $(this).find('label');
			if(!input.val()==''){
				label.hide();
			} else{
				label.show();
			}
		});
	}
	
	checkFields();
	
	$('#user-login-form .form-item input').each( function(){
		$(this).focus( function(){
			$(this).prev().hide();
		});
		$(this).blur( function(){
			if($(this).val()==''){
				$(this).prev().show();
			}
		});	
	});
	
	
	// add when downloaded to files db table when user clicks on a client file
	$('a.client_file').mousedown( function(event){
		
		switch (event.which) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
   		}
		
		uid = $(this).parents('.views-row').find('.file-data').attr('data-uid');
		nid = $(this).parents('.views-row').find('.file-data').attr('data-nid');
		title = $(this).attr('rel');
		url = $(this).attr('href');
		
		$.ajax({
			type: "POST",
			url: "/sites/all/themes/westward/templates/files_db.php",
			data: { uid: uid, nid: nid, title:title},
			success:function(){
			  //window.location = url;
			}
		});
		
        return false;
		
	});
	
	// add when update file is downloaded to files db table when user clicks on a client file
	$('a.client_file.updated').mousedown( function(event){
		
		switch (event.which) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
   		}
		
		uid = $(this).parents('.views-row').find('.file-data').attr('data-uid');
		nid = $(this).parents('.views-row').find('.file-data').attr('data-nid');
		title = $(this).attr('rel');
		url = $(this).attr('href');
		
		$.ajax({
			type: "POST",
			url: "/sites/all/themes/westward/templates/files_updated_db.php",
			data: { uid: uid, nid: nid, title:title},
			success:function(){
			  //window.location = url;
			}
		});
		
        return false;
		
	});
	
	
	// add when downloaded to resources db table when user clicks on a resource file
	$('a.resource_file').mousedown( function(event){
		
		switch (event.which) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
   		}
		
		uid = $(this).attr('data-uid');
		fid = $(this).attr('data-fid');
		title = $(this).attr('title');
		url = $(this).attr('href');
		
		$.ajax({
			type: "POST",
			url: "/sites/all/themes/westward/templates/resources_db.php",
			data: { uid: uid, fid: fid, title: title},
			success:function(){
			  window.location = url;
			  //console.log('Database Updated');
			}
		});
		
        return false;
		
	});
	
	
	// add when downloaded to videos db table when user watches a video
	$('a.video_file').mousedown( function(event){
		
		switch (event.which) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
   		}
		
		uid = $(this).attr('data-uid');
		nid = $(this).attr('data-nid');
		title = $(this).parents('.views-row').find('h3 a').text();
		url = $(this).attr('href');
		
		$.ajax({
			type: "POST",
			url: "/sites/all/themes/westward/templates/videos_db.php",
			data: { uid: uid, nid: nid, title: title},
			success:function(){
				window.location = url;
				//console.log('Database Updated');
				//console.log(title);
			}
		});
		
        return false;
		
	});




})