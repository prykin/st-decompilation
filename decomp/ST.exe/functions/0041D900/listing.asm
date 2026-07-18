FUN_0041d900:
0041D900  55                        PUSH EBP
0041D901  8B EC                     MOV EBP,ESP
0041D903  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
0041D906  85 C0                     TEST EAX,EAX
0041D908  75 63                     JNZ 0x0041d96d
0041D90A  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
0041D90E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0041D911  51                        PUSH ECX
0041D912  DB 45 10                  FILD dword ptr [EBP + 0x10]
0041D915  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
0041D919  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0041D91F  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0041D922  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
0041D926  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0041D92C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0041D932  D9 1C 24                  FSTP float ptr [ESP]
0041D935  DB 45 10                  FILD dword ptr [EBP + 0x10]
0041D938  51                        PUSH ECX
0041D939  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0041D93C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D942  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041D948  D9 1C 24                  FSTP float ptr [ESP]
0041D94B  DB 45 10                  FILD dword ptr [EBP + 0x10]
0041D94E  51                        PUSH ECX
0041D94F  81 C1 D5 01 00 00         ADD ECX,0x1d5
0041D955  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D95B  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041D961  D9 1C 24                  FSTP float ptr [ESP]
0041D964  E8 70 6C FE FF            CALL 0x004045d9
0041D969  5D                        POP EBP
0041D96A  C2 0C 00                  RET 0xc
LAB_0041d96d:
0041D96D  0F BF 55 10               MOVSX EDX,word ptr [EBP + 0x10]
0041D971  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0041D974  51                        PUSH ECX
0041D975  DB 45 10                  FILD dword ptr [EBP + 0x10]
0041D978  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0041D97C  D8 0D 04 05 79 00         FMUL float ptr [0x00790504]
0041D982  0F BF 55 08               MOVSX EDX,word ptr [EBP + 0x8]
0041D986  D8 05 00 05 79 00         FADD float ptr [0x00790500]
0041D98C  40                        INC EAX
0041D98D  42                        INC EDX
0041D98E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0041D991  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0041D997  D9 1C 24                  FSTP float ptr [ESP]
0041D99A  DB 45 10                  FILD dword ptr [EBP + 0x10]
0041D99D  51                        PUSH ECX
0041D99E  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0041D9A1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D9A7  D9 1C 24                  FSTP float ptr [ESP]
0041D9AA  DB 45 10                  FILD dword ptr [EBP + 0x10]
0041D9AD  51                        PUSH ECX
0041D9AE  81 C1 D5 01 00 00         ADD ECX,0x1d5
0041D9B4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D9BA  D9 1C 24                  FSTP float ptr [ESP]
0041D9BD  E8 17 6C FE FF            CALL 0x004045d9
0041D9C2  5D                        POP EBP
0041D9C3  C2 0C 00                  RET 0xc
