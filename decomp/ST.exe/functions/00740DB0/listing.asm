__set_osfhnd:
00740DB0  55                        PUSH EBP
00740DB1  8B EC                     MOV EBP,ESP
00740DB3  51                        PUSH ECX
00740DB4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740DB7  3B 05 DC A2 85 00         CMP EAX,dword ptr [0x0085a2dc]
00740DBD  0F 83 81 00 00 00         JNC 0x00740e44
00740DC3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740DC6  C1 F9 05                  SAR ECX,0x5
00740DC9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740DCC  83 E2 1F                  AND EDX,0x1f
00740DCF  8B 04 8D A0 A1 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x85a1a0]
00740DD6  83 3C D0 FF               CMP dword ptr [EAX + EDX*0x8],-0x1
00740DDA  75 68                     JNZ 0x00740e44
00740DDC  83 3D D0 14 7F 00 01      CMP dword ptr [0x007f14d0],0x1
00740DE3  75 42                     JNZ 0x00740e27
00740DE5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00740DE8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00740DEB  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00740DEF  74 0E                     JZ 0x00740dff
00740DF1  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
00740DF5  74 16                     JZ 0x00740e0d
00740DF7  83 7D FC 02               CMP dword ptr [EBP + -0x4],0x2
00740DFB  74 1E                     JZ 0x00740e1b
00740DFD  EB 28                     JMP 0x00740e27
LAB_00740dff:
00740DFF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00740E02  52                        PUSH EDX
00740E03  6A F6                     PUSH -0xa
00740E05  FF 15 58 BC 85 00         CALL dword ptr [0x0085bc58]
00740E0B  EB 1A                     JMP 0x00740e27
LAB_00740e0d:
00740E0D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00740E10  50                        PUSH EAX
00740E11  6A F5                     PUSH -0xb
00740E13  FF 15 58 BC 85 00         CALL dword ptr [0x0085bc58]
00740E19  EB 0C                     JMP 0x00740e27
LAB_00740e1b:
00740E1B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00740E1E  51                        PUSH ECX
00740E1F  6A F4                     PUSH -0xc
00740E21  FF 15 58 BC 85 00         CALL dword ptr [0x0085bc58]
LAB_00740e27:
00740E27  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00740E2A  C1 FA 05                  SAR EDX,0x5
00740E2D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00740E30  83 E0 1F                  AND EAX,0x1f
00740E33  8B 0C 95 A0 A1 85 00      MOV ECX,dword ptr [EDX*0x4 + 0x85a1a0]
00740E3A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00740E3D  89 14 C1                  MOV dword ptr [ECX + EAX*0x8],EDX
00740E40  33 C0                     XOR EAX,EAX
00740E42  EB 17                     JMP 0x00740e5b
LAB_00740e44:
00740E44  C7 05 48 71 85 00 09 00 00 00  MOV dword ptr [0x00857148],0x9
00740E4E  C7 05 4C 71 85 00 00 00 00 00  MOV dword ptr [0x0085714c],0x0
00740E58  83 C8 FF                  OR EAX,0xffffffff
LAB_00740e5b:
00740E5B  8B E5                     MOV ESP,EBP
00740E5D  5D                        POP EBP
00740E5E  C3                        RET
