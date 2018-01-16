FROM node:6

RUN npm install -g bs-platform

ADD src/package.json /tmp/package.json

RUN cd /tmp && npm install

WORKDIR /app

ADD src /app

RUN cp -r /tmp/node_modules node_modules

RUN npm link bs-platform

RUN yarn build

RUN yarn global add serve

CMD ["serve", "-s", "build", "-p", "8080"]
