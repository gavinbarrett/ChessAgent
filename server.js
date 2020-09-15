const express = require('express');
const app = express()
const port = 5555;

app.use(express.static('./build'));

app.get('/', (req, res) => {
	res.send('index');
});

app.listen(port, () => {
	console.log('Listening on 5555...');
});
