FUN_006e5150:
006E5150  55                        PUSH EBP
006E5151  8B EC                     MOV EBP,ESP
006E5153  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E5156  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
006E5159  83 F8 04                  CMP EAX,0x4
006E515C  74 12                     JZ 0x006e5170
006E515E  83 F8 0F                  CMP EAX,0xf
006E5161  75 40                     JNZ 0x006e51a3
006E5163  C7 41 1C 01 00 00 00      MOV dword ptr [ECX + 0x1c],0x1
006E516A  33 C0                     XOR EAX,EAX
006E516C  5D                        POP EBP
006E516D  C2 04 00                  RET 0x4
LAB_006e5170:
006E5170  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
006E5173  85 C0                     TEST EAX,EAX
006E5175  A3 74 6D 85 00            MOV [0x00856d74],EAX
006E517A  74 1A                     JZ 0x006e5196
006E517C  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
006E517F  85 C0                     TEST EAX,EAX
006E5181  74 13                     JZ 0x006e5196
006E5183  6A 00                     PUSH 0x0
006E5185  6A 0F                     PUSH 0xf
006E5187  6A 05                     PUSH 0x5
006E5189  6A 0F                     PUSH 0xf
006E518B  E8 00 F1 FF FF            CALL 0x006e4290
006E5190  33 C0                     XOR EAX,EAX
006E5192  5D                        POP EBP
006E5193  C2 04 00                  RET 0x4
LAB_006e5196:
006E5196  6A 00                     PUSH 0x0
006E5198  6A 0F                     PUSH 0xf
006E519A  6A 05                     PUSH 0x5
006E519C  6A 0F                     PUSH 0xf
006E519E  E8 9D F1 FF FF            CALL 0x006e4340
LAB_006e51a3:
006E51A3  33 C0                     XOR EAX,EAX
006E51A5  5D                        POP EBP
006E51A6  C2 04 00                  RET 0x4
