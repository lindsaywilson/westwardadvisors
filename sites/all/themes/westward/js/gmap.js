function initialize() {
        var myOptions = {
          center: new google.maps.LatLng(49.28465266206896, -123.12171936035156),
          zoom: 15,
		  mapTypeControl: false,
          mapTypeId: google.maps.MapTypeId.ROADMAP		  
        };
        var map = new google.maps.Map(document.getElementById("map"),
            myOptions);
		var coords = new google.maps.LatLng(49.28465266206896, -123.12171936035156);	
		var marker = new google.maps.Marker({
		  position: coords,
		  map: map,
		  title:"Westward Advisors Ltd."
		});
}

jQuery(document).ready( function(){
	initialize();
});
