## What does this come with?

**ReasonML** lets you write simple, fast and quality type safe code while leveraging both the JavaScript & OCaml ecosystems. This quickstart uses [**ReasonReact**](https://reasonml.github.io/reason-react/).
ReasonReact is a way to build React components with Reason. This project makes use of [glennsl/refetch](https://redex.github.io/packages/unpublished/glennsl/refetch) package to send HTTP requests, which are handled using Hasura's data APIs.

* [**ReasonReact**](https://reasonml.github.io/reason-react/) Hello World project written with [ReasonML](http://reasonml.github.io)
* Served with [**`serve`**](https://www.npmjs.com/package/serve) package
* Hot-reloading, instantly view the changes upon every save
* Cloud-ready **Dockerfile**

```
FROM node:6

RUN npm install -g bs-platform

WORKDIR /src

ADD src /src

RUN npm install

RUN npm link bs-platform

RUN yarn build

RUN yarn global add serve

CMD ["serve", "-s", "build", "-p", "8080"]
``` 

## Deployment Instructions

* Press the **Clone & Deploy** button and follow the instructions.
* The `hasura quickstart` command clones the project repository to your local computer, and also creates a **free Hasura cluster**, where the project will be hosted for free.
* A git remote (called hasura) is created and initialized with your project directory.
* Upon `git add .`, `git commit`, and `git push hasura master`, the project gets deployed on the cluster.
* The Hasura cluster is given a random name, and is hosted on hasura-app.io
* To make changes to the project, browse to `/microservices/www/src` and edit the ReasonML files in `src` folder according to your app. Commit the changes, and perform `git push` to deploy the changes.

``` shell

$ hasura microservice open www
```

* Once it's deployed, run the above command, which will open the `www` microservice in your browser where the app is hosted.

**Deployment - Behind the scenes:**

![Deployment](https://raw.githubusercontent.com/anirudhmurali/ReasonReact-Todo/master/deploy.gif)

## Local Development

To test and make changes to this app locally, follow the below instructions.
* Open Terminal and `cd` into the project folder
* Run `npm install` to install all the project dependencies
* Run `yarn start` and `yarn build` in the terminal to build and run it.
* Optionally, add the flag -w in package.json under scripts section for **hot-reloading**, and watching over the scripts
* Make changes to the app, and see the changes in the browser

## Viewing app logs

You can view the logs of the page which is being served with the below command.

``` shell
$ hasura microservice logs www
```
You can see the logs in your terminal, press `CTRL + C` to stop logging.

## Editing App dependencies

You can use Redex (Reason Package Index) to find ReasonML packages, and you can add it to your project by running the following command:
``` shell
$ npm install --save <package_name>
```
Also add the package name under `bsconfig.json`
```
"bs-dependencies": [
    "reason-react",
    "bs-jest",
    <package_name>
  ]
```

## Adding Database functionality

Hasura comes with set of Data APIs to access the Postgres database which comes bundled with every Hasura cluster. You can use packages like [`refetch`](https://redex.github.io/packages/unpublished/glennsl/refetch) to make HTTP requests to the database. An example implementation with data APIs can be found [here](https://hasura.io/hub/project/anirudhm/reasonml-react-todo).

Detailed docs of data APIs can be found [here](https://docs.hasura.io/0.15/manual/data/index.html).

## Architecture of what’s happening

**Backend Architecture**

![BaaS](https://raw.githubusercontent.com/anirudhmurali/ReasonReact-Todo/master/baas.gif)

## Adding Authentication functionality

![Auth UI](https://raw.githubusercontent.com/anirudhmurali/ReasonReact-Todo/master/ReasonReactAuth.png)

Follow the [Authorization docs](https://docs.hasura.io/0.15/manual/users/uikit.html) to add Authentication kit to your app.

## Next steps:

If you own a domain name, you can point the domain to this particular cluster. More on the setup process in the below link.

* [Change subdomain](https://docs.hasura.io/0.15/manual/gateway/index.html#custom-domains)

Hasura project is composed of a set of microservices. These include certain Hasura microservices like, postgres, nginx, data API, auth API and more but can also include your own microservices.

* [Adding Microservice](https://docs.hasura.io/0.15/manual/custom-microservices/index.html)

### Resources:

* [Reason Package Index](https://redex.github.io/)
* [ReasonReact](https://reasonml.github.io/reason-react/)
* [ReasonReact Example](https://github.com/jaredly/a-reason-react-tutorial)