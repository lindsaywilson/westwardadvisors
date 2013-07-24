
jQuery(document).ready( function($){
	
	fade = 1500;
	delay = 2000;
	function fadingIn(){
		$('.process-tdp .book').delay(delay).fadeIn(fade, function(){ 
			$(this).parents('.process').next().children().find('.book').fadeIn(fade, function(){
				$(this).parents('.process').next().children().find('.book').fadeIn(fade, function(){
					$(this).parents('.process').next().children().find('.book').fadeIn(fade, fadingOut());
				})
			})
		})
	}
	function fadingOut(){
		$('.process-tdp .book').delay(delay).fadeOut(fade, function(){ 
			$(this).parents('.process').next().children().find('.book').fadeOut(fade, function(){
				$(this).parents('.process').next().children().find('.book').fadeOut(fade, function(){
					$(this).parents('.process').next().children().find('.book').fadeOut(fade, fadingIn());
				})
			})
		})
	}
	fadingIn();
	
	
	function checkFields(){
		$('.form-item').each( function(){
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
	
	$('.form-item input').each( function(){
		$(this).focus( function(){
			$(this).prev().hide();
		});
		$(this).blur( function(){
			if($(this).val()==''){
				$(this).prev().show();
			}
		});	
	});


// document
});