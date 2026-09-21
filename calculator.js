;
Emitter.on('exit', () => {
  console.log('application closed...');
});
Emitter.emit('greet','2nd year');
Emitter.emit('exit');
