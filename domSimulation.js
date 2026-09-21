const { EventEmitter } = require('events');
class Button extends EventEmitter{}
const button =new Button();
button.on('click',()=> console.log('Button Clicked'));
button.on('click',()=> console.log('Mouse iss over the button'));
button.emit('click');
button.emit('mouseover');
