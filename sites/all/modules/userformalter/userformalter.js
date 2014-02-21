jQuery(document).ready(function($){
	
	
	// Lists to reorder
	lists = new Array('edit-field-client-und', 'edit-field-adv-und', 'edit-field-visible-to-advisors-und', 'edit-field-visible-to-clients-und', 'edit-field-advisor-und');
	
	$.each(lists, function( index, value ) {
		
		// Set as lastname, firstname
		$('#'+value).children().each(function(){
			if($(this).attr('value')!='_none'){
				txt = $(this).text().split(/ (.+)?/);
				if(typeof txt[1] != 'undefined'){
					$(this).text(txt[1]+', '+txt[0]);
				}
			}
		});
		
		// Reorder alphabetically
		var options = $('#'+value).find('option');
		selected = Array();
		$('#'+value).find(":selected").each( function(){
			selected.push($(this).val());
		});
		var arr = options.map(function(_, o) { return { t: $(o).text(), v: o.value }; }).get();
		arr.sort(function(o1, o2) { return o1.t > o2.t ? 1 : o1.t < o2.t ? -1 : 0; });
		options.each(function(i, o) {
		  o.value = arr[i].v;
		  $(o).text(arr[i].t);
		});
		options.each( function(){
			option = $(this);
			option.attr('selected','');
			$.each(selected, function( index, value ) {
				if(value == option.val()){
					option.attr('selected', 'selected');
				}
			});
		});
	});


})