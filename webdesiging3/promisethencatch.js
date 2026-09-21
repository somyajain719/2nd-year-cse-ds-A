const fs=require('fs').promises;
async function writeFile(){
    try{
        await fs.writeFile('example.txt','Hello, World!','utf8');
        console.log('File written successfully.');
    }
    catch(err){
        console.error('Error writing file:', err);
    }
}
writeFile();
async function readFile(){
    try{
        const data=await fs.readFile('example.txt','utf8');
        console.log('File content:', data);
    }
    catch(err){
        console.error('Error reading file:', err);
    }
}
readFile();
fs.rename('promises.txt', 'promises_renamed.txt', (err) => {
    if (err) {
        console.error('Error renaming file:', err);
    } else {
        console.log('File renamed successfully.');
    }
});