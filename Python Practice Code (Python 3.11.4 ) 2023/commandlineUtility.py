import argparse
import requests


def download (urll,filename):
      image_url = urll
      r = requests.get(image_url)
      file = filename+".jpg"
      with open(file,'wb') as f:
            f.write(r.content)
      f.close()
      
            
            

# creating parser instance
parser = argparse.ArgumentParser()


# adding cmd. line arguments
parser.add_argument("url",help="Provide The URL That Needs To Be Downloaded (Url Should Be In Double Quotes)")
parser.add_argument("filename",help="Enter The Filename ! (Without any file extension)")
# parser.add_argument("-o","--filename",help="Enter The Filename ! (Without any file extension)",default=None) # How To Make Optional Args


# parse the args so that it can be used 
args = parser.parse_args()


# Use the args in your code
download(args.url,args.filename)