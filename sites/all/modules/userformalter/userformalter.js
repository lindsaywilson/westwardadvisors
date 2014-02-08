jQuery(document).ready(function($){
	
	list = $('#edit-field-client-und');
	list2 = $('#edit-field-adv-und');
	  
	list.children().each(function(){
		if($(this).attr('value')!='_none'){
			txt = $(this).text().split(/ (.+)?/);
			if(typeof txt[1] != 'undefined'){
				$(this).text(txt[1]+', '+txt[0]);
			}
		}
	});
	
	list2.children().each(function(){
		if($(this).attr('value')!='_none'){
			txt = $(this).text().split(/ (.+)?/);
			if(typeof txt[1] != 'undefined'){
				$(this).text(txt[1]+', '+txt[0]);
			}
		}
	});
  
	
	var options = $('#edit-field-client-und option');
	var arr = options.map(function(_, o) { return { t: $(o).text(), v: o.value }; }).get();
	arr.sort(function(o1, o2) { return o1.t > o2.t ? 1 : o1.t < o2.t ? -1 : 0; });
	options.each(function(i, o) {
	  o.value = arr[i].v;
	  $(o).text(arr[i].t);
	});
	
	var options = $('#edit-field-adv-und option');
	var arr = options.map(function(_, o) { return { t: $(o).text(), v: o.value }; }).get();
	arr.sort(function(o1, o2) { return o1.t > o2.t ? 1 : o1.t < o2.t ? -1 : 0; });
	options.each(function(i, o) {
	  o.value = arr[i].v;
	  $(o).text(arr[i].t);
	});


})