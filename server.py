from os import path
from tornado.web import Application
from tornado.web import RequestHandler
from tornado.ioloop import IOLoop

class BaseHandler(RequestHandler):
    def get_current_user(self):
        return self.get_secure_cookie("user")

class MainHandler(BaseHandler):
    def get(self):
        self.render('index.html')

class Interface(BaseHandler):
    def get(self):
        self.render('interface.html')   

class SobreNos(BaseHandler):
    def get(self):
        self.render('sobrenos.html')   

if __name__ == '__main__':
    settings = {
        "cookie_secret": "444",
    }
    app = Application(
            [('/', MainHandler),
             ('/interface', Interface),
             ('/sobrenos', SobreNos),
            ],
            template_path=path.join(path.dirname(__file__), 'templates/html'),
            static_path=path.join(path.dirname(__file__), 'templates/static'),
            debug=True,
            **settings
        )
    app.listen(8899)
    IOLoop.current().start()
