function initialize() {
        var myOptions = {
          center: new google.maps.LatLng(49.276513,-123.121333),
          zoom: 15,
		  mapTypeControl: false,
          mapTypeId: google.maps.MapTypeId.ROADMAP		  
        };
        var map = new google.maps.Map(document.getElementById("map"),
            myOptions);
		var coords = new google.maps.LatLng(49.276513,-123.121333);	
		var marker = new google.maps.Marker({
		  position: coords,
		  map: map,
		  title:"Westward Advisors Ltd."
		});
}

jQuery(document).ready( function(){
	initialize();
});
