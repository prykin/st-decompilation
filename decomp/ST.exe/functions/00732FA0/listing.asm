FUN_00732fa0:
00732FA0  55                        PUSH EBP
00732FA1  8B EC                     MOV EBP,ESP
00732FA3  51                        PUSH ECX
00732FA4  83 3D B8 A5 85 00 00      CMP dword ptr [0x0085a5b8],0x0
00732FAB  0F 84 1B 01 00 00         JZ 0x007330cc
00732FB1  A1 B0 A5 85 00            MOV EAX,[0x0085a5b0]
00732FB6  C1 E0 0F                  SHL EAX,0xf
00732FB9  8B 0D B8 A5 85 00         MOV ECX,dword ptr [0x0085a5b8]
00732FBF  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00732FC2  03 D0                     ADD EDX,EAX
00732FC4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00732FC7  68 00 40 00 00            PUSH 0x4000
00732FCC  68 00 80 00 00            PUSH 0x8000
00732FD1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00732FD4  50                        PUSH EAX
00732FD5  FF 15 E0 BB 85 00         CALL dword ptr [0x0085bbe0]
00732FDB  BA 00 00 00 80            MOV EDX,0x80000000
00732FE0  8B 0D B0 A5 85 00         MOV ECX,dword ptr [0x0085a5b0]
00732FE6  D3 EA                     SHR EDX,CL
00732FE8  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
00732FED  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00732FF0  0B CA                     OR ECX,EDX
00732FF2  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
00732FF8  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00732FFB  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
00733000  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00733003  8B 15 B0 A5 85 00         MOV EDX,dword ptr [0x0085a5b0]
00733009  C7 84 91 C4 00 00 00 00 00 00 00  MOV dword ptr [ECX + EDX*0x4 + 0xc4],0x0
00733014  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
00733019  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0073301C  8A 51 43                  MOV DL,byte ptr [ECX + 0x43]
0073301F  80 EA 01                  SUB DL,0x1
00733022  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
00733027  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0073302A  88 51 43                  MOV byte ptr [ECX + 0x43],DL
0073302D  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
00733033  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
00733036  0F BE 48 43               MOVSX ECX,byte ptr [EAX + 0x43]
0073303A  85 C9                     TEST ECX,ECX
0073303C  75 14                     JNZ 0x00733052
0073303E  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
00733044  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00733047  24 FE                     AND AL,0xfe
00733049  8B 0D B8 A5 85 00         MOV ECX,dword ptr [0x0085a5b8]
0073304F  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
LAB_00733052:
00733052  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
00733058  83 7A 08 FF               CMP dword ptr [EDX + 0x8],-0x1
0073305C  75 64                     JNZ 0x007330c2
0073305E  83 3D BC A5 85 00 01      CMP dword ptr [0x0085a5bc],0x1
00733065  7E 5B                     JLE 0x007330c2
00733067  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
0073306C  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0073306F  51                        PUSH ECX
00733070  6A 00                     PUSH 0x0
00733072  8B 15 C4 A5 85 00         MOV EDX,dword ptr [0x0085a5c4]
00733078  52                        PUSH EDX
00733079  FF 15 D4 BB 85 00         CALL dword ptr [0x0085bbd4]
0073307F  A1 BC A5 85 00            MOV EAX,[0x0085a5bc]
00733084  6B C0 14                  IMUL EAX,EAX,0x14
00733087  8B 0D C0 A5 85 00         MOV ECX,dword ptr [0x0085a5c0]
0073308D  03 C8                     ADD ECX,EAX
0073308F  8B 15 B8 A5 85 00         MOV EDX,dword ptr [0x0085a5b8]
00733095  83 C2 14                  ADD EDX,0x14
00733098  2B CA                     SUB ECX,EDX
0073309A  51                        PUSH ECX
0073309B  A1 B8 A5 85 00            MOV EAX,[0x0085a5b8]
007330A0  83 C0 14                  ADD EAX,0x14
007330A3  50                        PUSH EAX
007330A4  8B 0D B8 A5 85 00         MOV ECX,dword ptr [0x0085a5b8]
007330AA  51                        PUSH ECX
007330AB  E8 C0 A9 FF FF            CALL 0x0072da70
007330B0  83 C4 0C                  ADD ESP,0xc
007330B3  8B 15 BC A5 85 00         MOV EDX,dword ptr [0x0085a5bc]
007330B9  83 EA 01                  SUB EDX,0x1
007330BC  89 15 BC A5 85 00         MOV dword ptr [0x0085a5bc],EDX
LAB_007330c2:
007330C2  C7 05 B8 A5 85 00 00 00 00 00  MOV dword ptr [0x0085a5b8],0x0
LAB_007330cc:
007330CC  8B E5                     MOV ESP,EBP
007330CE  5D                        POP EBP
007330CF  C3                        RET
