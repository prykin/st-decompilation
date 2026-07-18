ctrlevent_capture:
00733AD0  55                        PUSH EBP
00733AD1  8B EC                     MOV EBP,ESP
00733AD3  83 EC 0C                  SUB ESP,0xc
00733AD6  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00733ADA  75 18                     JNZ 0x00733af4
00733ADC  C7 45 F8 E4 71 85 00      MOV dword ptr [EBP + -0x8],0x8571e4
00733AE3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00733AE6  8B 08                     MOV ECX,dword ptr [EAX]
00733AE8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00733AEB  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
00733AF2  EB 16                     JMP 0x00733b0a
LAB_00733af4:
00733AF4  C7 45 F8 E8 71 85 00      MOV dword ptr [EBP + -0x8],0x8571e8
00733AFB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00733AFE  8B 02                     MOV EAX,dword ptr [EDX]
00733B00  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00733B03  C7 45 FC 15 00 00 00      MOV dword ptr [EBP + -0x4],0x15
LAB_00733b0a:
00733B0A  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00733B0E  75 04                     JNZ 0x00733b14
00733B10  33 C0                     XOR EAX,EAX
00733B12  EB 1E                     JMP 0x00733b32
LAB_00733b14:
00733B14  83 7D F4 01               CMP dword ptr [EBP + -0xc],0x1
00733B18  74 13                     JZ 0x00733b2d
00733B1A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00733B1D  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00733B23  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00733B26  52                        PUSH EDX
00733B27  FF 55 F4                  CALL dword ptr [EBP + -0xc]
00733B2A  83 C4 04                  ADD ESP,0x4
LAB_00733b2d:
00733B2D  B8 01 00 00 00            MOV EAX,0x1
LAB_00733b32:
00733B32  8B E5                     MOV ESP,EBP
00733B34  5D                        POP EBP
00733B35  C2 04 00                  RET 0x4
