var i1=document.getElementById("frame");
 var ip=document.createElement("input");
 ip.type="email";
 ip.placeholder="enter mail";
 ip.ClassName="form-control";
 ip.id="mail";

 function getVal() {
    const val = document.querySelector('input').value;
    console.log(val);
  }