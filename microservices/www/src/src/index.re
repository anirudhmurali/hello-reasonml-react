[%bs.raw {|require('./index.css')|}];

// [@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";
// SWs are disabled. Read this: https://github.com/facebookincubator/create-react-app/blob/master/packages/react-scripts/template/README.md#offline-first-considerations before you decided to enable it.

ReactDOMRe.renderToElementWithId(<App message="Welcome to React and Reason" />, "root");

// register_service_worker();
