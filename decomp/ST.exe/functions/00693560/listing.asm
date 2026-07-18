FUN_00693560:
00693560  55                        PUSH EBP
00693561  8B EC                     MOV EBP,ESP
00693563  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00693566  83 C8 FF                  OR EAX,0xffffffff
00693569  81 F9 45 04 00 00         CMP ECX,0x445
0069356F  0F 8F A1 00 00 00         JG 0x00693616
00693575  0F 84 94 00 00 00         JZ 0x0069360f
0069357B  81 F9 2C 01 00 00         CMP ECX,0x12c
00693581  7F 68                     JG 0x006935eb
00693583  74 52                     JZ 0x006935d7
00693585  81 E9 0E 01 00 00         SUB ECX,0x10e
0069358B  74 36                     JZ 0x006935c3
0069358D  83 E9 0A                  SUB ECX,0xa
00693590  74 1D                     JZ 0x006935af
00693592  83 E9 0A                  SUB ECX,0xa
00693595  0F 85 EB 00 00 00         JNZ 0x00693686
0069359B  81 7D 0C 1D 04 00 00      CMP dword ptr [EBP + 0xc],0x41d
006935A2  0F 85 DE 00 00 00         JNZ 0x00693686
006935A8  B8 10 00 00 00            MOV EAX,0x10
006935AD  5D                        POP EBP
006935AE  C3                        RET
LAB_006935af:
006935AF  81 7D 0C 1C 04 00 00      CMP dword ptr [EBP + 0xc],0x41c
006935B6  0F 85 CA 00 00 00         JNZ 0x00693686
006935BC  B8 0F 00 00 00            MOV EAX,0xf
006935C1  5D                        POP EBP
006935C2  C3                        RET
LAB_006935c3:
006935C3  81 7D 0C 1A 04 00 00      CMP dword ptr [EBP + 0xc],0x41a
006935CA  0F 85 B6 00 00 00         JNZ 0x00693686
006935D0  B8 0D 00 00 00            MOV EAX,0xd
006935D5  5D                        POP EBP
006935D6  C3                        RET
LAB_006935d7:
006935D7  81 7D 0C 1B 04 00 00      CMP dword ptr [EBP + 0xc],0x41b
006935DE  0F 85 A2 00 00 00         JNZ 0x00693686
006935E4  B8 0E 00 00 00            MOV EAX,0xe
006935E9  5D                        POP EBP
006935EA  C3                        RET
LAB_006935eb:
006935EB  81 E9 42 04 00 00         SUB ECX,0x442
006935F1  74 18                     JZ 0x0069360b
006935F3  49                        DEC ECX
006935F4  74 0E                     JZ 0x00693604
006935F6  49                        DEC ECX
006935F7  0F 85 89 00 00 00         JNZ 0x00693686
006935FD  B8 11 00 00 00            MOV EAX,0x11
00693602  5D                        POP EBP
00693603  C3                        RET
LAB_00693604:
00693604  B8 0B 00 00 00            MOV EAX,0xb
00693609  5D                        POP EBP
0069360A  C3                        RET
LAB_0069360b:
0069360B  33 C0                     XOR EAX,EAX
0069360D  5D                        POP EBP
0069360E  C3                        RET
LAB_0069360f:
0069360F  B8 12 00 00 00            MOV EAX,0x12
00693614  5D                        POP EBP
00693615  C3                        RET
LAB_00693616:
00693616  81 C1 47 F4 FF FF         ADD ECX,0xfffff447
0069361C  83 F9 09                  CMP ECX,0x9
0069361F  77 65                     JA 0x00693686
switchD_00693621::switchD:
00693621  FF 24 8D 88 36 69 00      JMP dword ptr [ECX*0x4 + 0x693688]
switchD_00693621::caseD_bb9:
00693628  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069362B  81 E9 14 04 00 00         SUB ECX,0x414
00693631  74 16                     JZ 0x00693649
00693633  83 E9 03                  SUB ECX,0x3
00693636  74 0A                     JZ 0x00693642
00693638  49                        DEC ECX
00693639  75 4B                     JNZ 0x00693686
0069363B  B8 03 00 00 00            MOV EAX,0x3
00693640  5D                        POP EBP
00693641  C3                        RET
LAB_00693642:
00693642  B8 02 00 00 00            MOV EAX,0x2
00693647  5D                        POP EBP
00693648  C3                        RET
LAB_00693649:
00693649  B8 01 00 00 00            MOV EAX,0x1
0069364E  5D                        POP EBP
0069364F  C3                        RET
switchD_00693621::caseD_bbc:
00693650  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00693653  81 E9 10 04 00 00         SUB ECX,0x410
00693659  74 0A                     JZ 0x00693665
0069365B  49                        DEC ECX
0069365C  75 28                     JNZ 0x00693686
0069365E  B8 05 00 00 00            MOV EAX,0x5
00693663  5D                        POP EBP
00693664  C3                        RET
LAB_00693665:
00693665  B8 04 00 00 00            MOV EAX,0x4
0069366A  5D                        POP EBP
0069366B  C3                        RET
switchD_00693621::caseD_bbe:
0069366C  B8 06 00 00 00            MOV EAX,0x6
00693671  5D                        POP EBP
00693672  C3                        RET
switchD_00693621::caseD_bbf:
00693673  B8 07 00 00 00            MOV EAX,0x7
00693678  5D                        POP EBP
00693679  C3                        RET
switchD_00693621::caseD_bc0:
0069367A  B8 08 00 00 00            MOV EAX,0x8
0069367F  5D                        POP EBP
00693680  C3                        RET
switchD_00693621::caseD_bc2:
00693681  B8 0C 00 00 00            MOV EAX,0xc
switchD_00693621::caseD_bba:
00693686  5D                        POP EBP
00693687  C3                        RET
