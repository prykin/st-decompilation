FUN_00746170:
00746170  55                        PUSH EBP
00746171  8B EC                     MOV EBP,ESP
00746173  83 EC 0C                  SUB ESP,0xc
00746176  A1 78 71 85 00            MOV EAX,[0x00857178]
0074617B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0074617e:
0074617E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00746181  83 39 00                  CMP dword ptr [ECX],0x0
00746184  0F 84 8E 00 00 00         JZ 0x00746218
0074618A  6A 00                     PUSH 0x0
0074618C  6A 00                     PUSH 0x0
0074618E  6A 00                     PUSH 0x0
00746190  6A 00                     PUSH 0x0
00746192  6A FF                     PUSH -0x1
00746194  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00746197  8B 02                     MOV EAX,dword ptr [EDX]
00746199  50                        PUSH EAX
0074619A  6A 00                     PUSH 0x0
0074619C  6A 01                     PUSH 0x1
0074619E  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
007461A4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007461A7  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
007461AB  75 05                     JNZ 0x007461b2
007461AD  83 C8 FF                  OR EAX,0xffffffff
007461B0  EB 68                     JMP 0x0074621a
LAB_007461b2:
007461B2  6A 3D                     PUSH 0x3d
007461B4  68 5C 10 7A 00            PUSH 0x7a105c
007461B9  6A 02                     PUSH 0x2
007461BB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007461BE  51                        PUSH ECX
007461BF  E8 40 AF CB FF            CALL 0x00401104
007461C4  83 C4 10                  ADD ESP,0x10
007461C7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007461CA  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
007461CE  75 05                     JNZ 0x007461d5
007461D0  83 C8 FF                  OR EAX,0xffffffff
007461D3  EB 45                     JMP 0x0074621a
LAB_007461d5:
007461D5  6A 00                     PUSH 0x0
007461D7  6A 00                     PUSH 0x0
007461D9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007461DC  52                        PUSH EDX
007461DD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007461E0  50                        PUSH EAX
007461E1  6A FF                     PUSH -0x1
007461E3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007461E6  8B 11                     MOV EDX,dword ptr [ECX]
007461E8  52                        PUSH EDX
007461E9  6A 00                     PUSH 0x0
007461EB  6A 01                     PUSH 0x1
007461ED  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
007461F3  85 C0                     TEST EAX,EAX
007461F5  75 05                     JNZ 0x007461fc
007461F7  83 C8 FF                  OR EAX,0xffffffff
007461FA  EB 1E                     JMP 0x0074621a
LAB_007461fc:
007461FC  6A 00                     PUSH 0x0
007461FE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00746201  50                        PUSH EAX
00746202  E8 69 04 00 00            CALL 0x00746670
00746207  83 C4 08                  ADD ESP,0x8
0074620A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0074620D  83 C1 04                  ADD ECX,0x4
00746210  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00746213  E9 66 FF FF FF            JMP 0x0074617e
LAB_00746218:
00746218  33 C0                     XOR EAX,EAX
LAB_0074621a:
0074621A  8B E5                     MOV ESP,EBP
0074621C  5D                        POP EBP
0074621D  C3                        RET
