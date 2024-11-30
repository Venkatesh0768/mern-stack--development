//callback
function VenkyASyncFunction(callback){
    callback("Hi There")
}

async function main() {
    VenkyASyncFunction(function(value){
        console.log(value)
    })
}
main();