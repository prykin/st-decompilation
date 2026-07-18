FUN_00490d90:
00490D90  8B 81 F7 06 00 00         MOV EAX,dword ptr [ECX + 0x6f7]
00490D96  83 F8 08                  CMP EAX,0x8
00490D99  74 41                     JZ 0x00490ddc
00490D9B  83 F8 14                  CMP EAX,0x14
00490D9E  74 3C                     JZ 0x00490ddc
00490DA0  83 F8 1A                  CMP EAX,0x1a
00490DA3  74 37                     JZ 0x00490ddc
00490DA5  83 F8 07                  CMP EAX,0x7
00490DA8  74 32                     JZ 0x00490ddc
00490DAA  83 F8 13                  CMP EAX,0x13
00490DAD  74 2D                     JZ 0x00490ddc
00490DAF  83 F8 1B                  CMP EAX,0x1b
00490DB2  74 28                     JZ 0x00490ddc
00490DB4  83 F8 0C                  CMP EAX,0xc
00490DB7  74 23                     JZ 0x00490ddc
00490DB9  83 F8 18                  CMP EAX,0x18
00490DBC  74 1E                     JZ 0x00490ddc
00490DBE  83 F8 19                  CMP EAX,0x19
00490DC1  74 19                     JZ 0x00490ddc
00490DC3  83 F8 09                  CMP EAX,0x9
00490DC6  74 14                     JZ 0x00490ddc
00490DC8  83 F8 15                  CMP EAX,0x15
00490DCB  74 0F                     JZ 0x00490ddc
00490DCD  8B 91 3E 07 00 00         MOV EDX,dword ptr [ECX + 0x73e]
00490DD3  B8 01 00 00 00            MOV EAX,0x1
00490DD8  3B D0                     CMP EDX,EAX
00490DDA  74 02                     JZ 0x00490dde
LAB_00490ddc:
00490DDC  33 C0                     XOR EAX,EAX
LAB_00490dde:
00490DDE  C3                        RET
