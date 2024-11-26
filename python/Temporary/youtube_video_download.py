from pytube import YouTube
YouTube('https://www.youtube.com/watch?v=0aUav1lx3rA').streams.first().download()
