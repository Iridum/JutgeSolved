/* global self */

// We need a SW to have a PWA

self.addEventListener('install', function(e) {
    console.log('[ServiceWorker] Install');
});

self.addEventListener('activate', function(e) {
    console.log('[ServiceWorker] Activate');
    return self.clients.claim();
});