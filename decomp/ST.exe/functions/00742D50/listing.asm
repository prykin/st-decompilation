FUN_00742d50:
00742D50  55                        PUSH EBP
00742D51  8B EC                     MOV EBP,ESP
00742D53  83 EC 0C                  SUB ESP,0xc
00742D56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742D59  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
00742D5F  73 1F                     JNC 0x00742d80
00742D61  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00742D64  C1 F9 05                  SAR ECX,0x5
00742D67  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742D6A  83 E2 1F                  AND EDX,0x1f
00742D6D  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00742D74  0F BE 4C D0 04            MOVSX ECX,byte ptr [EAX + EDX*0x8 + 0x4]
00742D79  83 E1 01                  AND ECX,0x1
00742D7C  85 C9                     TEST ECX,ECX
00742D7E  75 1C                     JNZ 0x00742d9c
LAB_00742d80:
00742D80  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00742D8A  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00742D94  83 C8 FF                  OR EAX,0xffffffff
00742D97  E9 9E 00 00 00            JMP 0x00742e3a
LAB_00742d9c:
00742D9C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742D9F  52                        PUSH EDX
00742DA0  E8 8B E1 FF FF            CALL 0x00740f30
00742DA5  83 C4 04                  ADD ESP,0x4
00742DA8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00742DAB  83 7D F4 FF               CMP dword ptr [EBP + -0xc],-0x1
00742DAF  75 0F                     JNZ 0x00742dc0
00742DB1  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00742DBB  83 C8 FF                  OR EAX,0xffffffff
00742DBE  EB 7A                     JMP 0x00742e3a
LAB_00742dc0:
00742DC0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742DC3  50                        PUSH EAX
00742DC4  6A 00                     PUSH 0x0
00742DC6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00742DC9  51                        PUSH ECX
00742DCA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00742DCD  52                        PUSH EDX
00742DCE  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
00742DD4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00742DD7  83 7D F8 FF               CMP dword ptr [EBP + -0x8],-0x1
00742DDB  75 0B                     JNZ 0x00742de8
00742DDD  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
00742DE3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00742DE6  EB 07                     JMP 0x00742def
LAB_00742de8:
00742DE8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00742def:
00742DEF  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00742DF3  74 11                     JZ 0x00742e06
00742DF5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00742DF8  50                        PUSH EAX
00742DF9  E8 F2 DD FF FF            CALL 0x00740bf0
00742DFE  83 C4 04                  ADD ESP,0x4
00742E01  83 C8 FF                  OR EAX,0xffffffff
00742E04  EB 34                     JMP 0x00742e3a
LAB_00742e06:
00742E06  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00742E09  C1 F9 05                  SAR ECX,0x5
00742E0C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742E0F  83 E2 1F                  AND EDX,0x1f
00742E12  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00742E19  8A 4C D0 04               MOV CL,byte ptr [EAX + EDX*0x8 + 0x4]
00742E1D  80 E1 FD                  AND CL,0xfd
00742E20  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742E23  C1 FA 05                  SAR EDX,0x5
00742E26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00742E29  83 E0 1F                  AND EAX,0x1f
00742E2C  8B 14 95 A0 A1 85 00      MOV EDX,dword ptr [EDX*0x4 + 0x85a1a0]
00742E33  88 4C C2 04               MOV byte ptr [EDX + EAX*0x8 + 0x4],CL
00742E37  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00742e3a:
00742E3A  8B E5                     MOV ESP,EBP
00742E3C  5D                        POP EBP
00742E3D  C3                        RET
