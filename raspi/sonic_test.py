import wiringpi as wipi
import hcsr04 as sonic
import time

wipi.wiringPiSetupGpio()
wipi.pinMode(5,0)

def measure():
	return sonic.distance()

def tweet(page):
	import tweepy
    import secret
	auth=tweepy.OAuthHandler(API_Key,API_SKey)
	auth.set_access_token(ACS_Token,ACS_Stoken)

	api=tweepy.API(auth)

	head='#BookManager report\n'
	body='Today reading @rig_rx:\nNow:'+time.gmtime()+'(GMT)\npages:'+str(page)

	api.status(head+body)

if wipi.digitalRead(5)==0:
	d=measure()
	tweet(int((d-0.1)/0.013))