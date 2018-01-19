[%bs.raw {|require('./index.css')|}];

ReactDOMRe.renderToElementWithId(<App message="Welcome to React and Reason" />, "root");

/*
# SWs are disabled. Before enabling Read:
# https://github.com/facebookincubator/create-react-app/blob/master/packages/react-scripts/template/README.md#offline-first-considerations
[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";
register_service_worker();
*/
