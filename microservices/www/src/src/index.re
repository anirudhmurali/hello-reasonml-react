[%bs.raw {|require('./index.css')|}];

ReactDOMRe.renderToElementWithId(<App message="Welcome to React and Reason" />, "root");

/*
// SWs are disabled, since that will be the default behaviour anyway: https://git.io/vN2tN
// Before enabling, read about offline-first-considerations: https://git.io/v7OeA

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";
register_service_worker();
*/
