//callback
function VenkyASyncFunction(callback){
    callback("Hi There")
}

let promise = new Promise(function(){
    alert("Hello This is Promise")
    resolve(56)
})

setTimeout(function(){
    console.log("Helllo World")
}, 2000)

async function main() {
    VenkyASyncFunction(function(value){
        console.log(value)
    })
}

console.log(promise)
main();