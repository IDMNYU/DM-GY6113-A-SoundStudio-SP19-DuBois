// this is javascript
// fun!
var seq = [];
var seqptr = 0;

function add(v)
{
		seq.push(v);
}

function random()
{
		var p = Math.floor(Math.random()*seq.length);
		outlet(0, seq[p]);
}

function doit()
{
	//post(seq.length + '\n');
	if(seq.length>0) {
		outlet(0, seq[seqptr]);
		seqptr = (seqptr+1) % seq.length;
	}
}

function clear()
{
		seq = [];
}