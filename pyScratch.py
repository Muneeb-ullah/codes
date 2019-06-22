import tkinter as tk
import tempfile

ICON = (b'\x00\x00\x01\x00\x01\x00\x10\x10\x00\x00\x01\x00\x08\x00h\x05\x00\x00'
        b'\x16\x00\x00\x00(\x00\x00\x00\x10\x00\x00\x00 \x00\x00\x00\x01\x00'
        b'\x08\x00\x00\x00\x00\x00@\x05\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00'
        b'\x00\x01\x00\x00\x00\x01') + b'\x00'*1282 + b'\xff'*64

_, ICON_PATH = tempfile.mkstemp()
with open(ICON_PATH, 'wb') as icon_file:
    icon_file.write(ICON)



root = tk.Tk()
root.title('')
root.geometry('500x300')
root.resizable(False, False)
root.iconbitmap(default=ICON_PATH)

frame = tk.Frame(root, bg='white')
frame.place(relwidth=1, relheight=1)

user_name_lbl = tk.Label(frame, text='Username', fg='#333', font=('Verdana', 12) ,  bg='white')
user_name_lbl.place(relx=.1, rely=.2)

user_name_entry = tk.Entry(frame, bg='white', width=25, font=('times new roman', 12))
user_name_entry.place(relx=.5, rely=.2)

password_lbl = tk.Label(frame, text='Password', fg='#333', font=('verdana', 12), bg='white')
password_lbl.place(relx=.1, rely=.4)

password_entry = tk.Entry(frame, bg='white', width=25, show='*', font=('times new roman', 12))
password_entry.place(relx=.5,rely=.4)

submit_btn = tk.Button(frame, text='Submit', fg='white', bg='#333', bd=0, font=('verdana', 12))
submit_btn.place(relx=.38, rely=.7, relwidth=.3, relheight=.12)

root.mainloop()