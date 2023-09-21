 function validation(){
	let email = document.getElementById('email').value;
	let psw = document.getElementById('psw').value;
	let psw-repeat = document.getElementById('psw-repeat').value;
	let status_email = document.querySelector('#error_email');
	 
	if(email == ""){
	status_email.innerHTML = "email is required";
	status_email.style.colour = "red";
	}
 }
 
 
 