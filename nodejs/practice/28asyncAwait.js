function placeOrder(drink) {
    return new Promise((resolve, reject) => {
        if (drink === 'coffee') {
            resolve('order placed');
        } else {
            reject('sorry');
        }
    })   
}

function processOrder(resolvedOrder) {
    return new Promise((resolve) => {
        console.log('order is being processed');
        resolve(`Your order recieved ${resolvedOrder}`);
    })
}

// placeOrder('coffee') // any other input will give the error statement as output
// .then(function (orderRecieved) {
//     console.log(orderRecieved);
//     const orderPromise = processOrder(orderRecieved)
//     return orderPromise;
// })
// .then(function (orderSuccess) {
//     console.log(orderSuccess);
// })
// .catch(function (err) {
//     console.log(err);
// })


// using async await
async function serveOrder() {    
    try {
        const placedOrder = await placeOrder('coffee');
        console.log(placedOrder);
        const orderProcessed = await processOrder(placedOrder);
        console.log(orderProcessed);
        
    } catch (error) {
        console.log(error);
    }
}

serveOrder()
