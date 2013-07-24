jQuery(document).ready(function($){
	
  $('.view .views-field-field-header-image img').removeAttr('width').removeAttr('height');
  
  $('ul#nice-menu-1').mobileSelect({
  	useWindowWidth: true,
	autoHide: false,
	deviceWidth: 740
  })
  
  $('h2.user-toggle a').click(function(){
  	$(this).parents('.views-row').children().find('.view-client-files').slideToggle('fast');
	return false;
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

})