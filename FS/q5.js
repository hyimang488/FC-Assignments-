const products = [
    {
        productId: 1,
        name: "Laptop",
        category: "Electronics",
        price: 50000,
        quantity: 1
    },
    {
        productId: 2,
        name: "Mouse",
        category: "Electronics",
        price: 800,
        quantity: 2
    },
    {
        productId: 3,
        name: "T-Shirt",
        category: "Clothing",
        price: 1200,
        quantity: 3
    },
    {
        productId: 4,
        name: "Shoes",
        category: "Footwear",
        price: 2500,
        quantity: 1
    },
    {
        productId: 5,
        name: "Headphones",
        category: "Electronics",
        price: 3000,
        quantity: 2
    }
];

// Calculate total cart value
function calculateCartTotal(products) {
    let total = 0;

    for (let product of products) {
        total += product.price * product.quantity;
    }

    return total;
}

// Apply discount
function applyDiscount(total, discountPercent) {
    const discount = total * discountPercent / 100;

    return total - discount;
}

// Process products using callback
function processProducts(products, callback) {
    return products.filter(callback);
}

// Callback to find electronics
function electronicsOnly(product) {
    return product.category === "Electronics";
}

// Callback based on price range
function priceRange(product) {
    return product.price >= 1000 &&
           product.price <= 5000;
}

// Callback based on stock availability
function inStock(product) {
    return product.quantity > 0;
}

const cartTotal = calculateCartTotal(products);

console.log("Total Cart Value: ₹" + cartTotal);

const discountedTotal = applyDiscount(
    cartTotal,
    10
);

console.log(
    "Total After 10% Discount: ₹" +
    discountedTotal
);

console.log(
    "Electronics:",
    processProducts(products, electronicsOnly)
);

console.log(
    "Products Between ₹1000 and ₹5000:",
    processProducts(products, priceRange)
);

console.log(
    "Products In Stock:",
    processProducts(products, inStock)
);