FUN_00627a60:
00627A60  8B 81 AE 02 00 00         MOV EAX,dword ptr [ECX + 0x2ae]
00627A66  83 F8 02                  CMP EAX,0x2
00627A69  74 15                     JZ 0x00627a80
00627A6B  83 F8 03                  CMP EAX,0x3
00627A6E  74 10                     JZ 0x00627a80
00627A70  83 F8 04                  CMP EAX,0x4
00627A73  74 0B                     JZ 0x00627a80
00627A75  83 F8 05                  CMP EAX,0x5
00627A78  74 06                     JZ 0x00627a80
00627A7A  B8 01 00 00 00            MOV EAX,0x1
00627A7F  C3                        RET
LAB_00627a80:
00627A80  33 C0                     XOR EAX,EAX
00627A82  C3                        RET
