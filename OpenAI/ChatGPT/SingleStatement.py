from openai import OpenAI
import os
api_key = # ENTER YOUR OWN OpenAI API KEY HERE #
os.environ["OPENAI_API_KEY"] = api_key
you = input("How'd you like to be addressed ?    > ")
chatgpt = input("How'd you like to address ChatGPT ? > ")
persona = input(f"Tell {chatgpt} how to act: ")
client = OpenAI()
messages = [
    {"role": "system", "content": persona},
]

say = input(f"{you}: ")
if say:
        messages.append(
            {"role": "user", "content": say},
        )
        chat = client.chat.completions.create(model="gpt-3.5-turbo-1106", messages=messages)
    
reply = chat.choices[0].message.content
print(f"{chatgpt}: {reply}")
messages.append({"role": "assistant", "content": reply})
     
