from manim import *

class Hello(MovingCameraScene):
    def construct(self):
        val = ValueTracker(1)
        axes = Axes(x_range=[-20,20],x_length=25, y_range=[-10,10], y_length=7)
        
        graph = always_redraw(
            lambda: axes.plot(
                lambda x: val.get_value() * x**2,
                x_range=[-10, 10],
                color=BLUE
            )
        )

        gro = VGroup(axes,graph)

        

        self.play(DrawBorderThenFill(axes))
        self.play(DrawBorderThenFill(graph))
        self.play(val.animate.set_value(0.01), run_time=3)
        self.play(gro.animate.scale(0.5))
        self.play(self.camera.frame.animate.scale(0.1).move_to(axes.c2p(9,0)),val.animate.set_value(0.1), run_time=3)
        self.play(self.camera.frame.animate.scale(0.4).move_to(axes.c2p(10,10)), run_time=3)
        self.wait()
        