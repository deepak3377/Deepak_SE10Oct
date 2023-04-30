#pip : python index package 

import instaloader

name = input("Enter User name : ")

insta = instaloader.Instaloader()

insta.download_profile(name,profile_pic_only=True)