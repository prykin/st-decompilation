FUN_0041cff0:
0041CFF0  55                        PUSH EBP
0041CFF1  8B EC                     MOV EBP,ESP
0041CFF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041CFF6  56                        PUSH ESI
0041CFF7  8B F1                     MOV ESI,ECX
0041CFF9  89 86 09 01 00 00         MOV dword ptr [ESI + 0x109],EAX
0041CFFF  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041D005  85 C9                     TEST ECX,ECX
0041D007  74 1F                     JZ 0x0041d028
0041D009  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D00C  6A FF                     PUSH -0x1
0041D00E  52                        PUSH EDX
0041D00F  50                        PUSH EAX
0041D010  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041D014  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D017  50                        PUSH EAX
0041D018  52                        PUSH EDX
0041D019  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041D01D  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041D021  50                        PUSH EAX
0041D022  52                        PUSH EDX
0041D023  E8 B8 50 FE FF            CALL 0x004020e0
LAB_0041d028:
0041D028  8B 06                     MOV EAX,dword ptr [ESI]
0041D02A  8B CE                     MOV ECX,ESI
0041D02C  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041D02F  83 F8 01                  CMP EAX,0x1
0041D032  0F 85 81 00 00 00         JNZ 0x0041d0b9
0041D038  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041D03B  33 C9                     XOR ECX,ECX
0041D03D  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041D043  3B C1                     CMP EAX,ECX
0041D045  75 72                     JNZ 0x0041d0b9
0041D047  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041D04A  33 C0                     XOR EAX,EAX
0041D04C  DB 86 09 01 00 00         FILD dword ptr [ESI + 0x109]
0041D052  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041D056  C1 EA 10                  SHR EDX,0x10
0041D059  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D05F  81 E2 FF 00 00 00         AND EDX,0xff
0041D065  80 CE 01                  OR DH,0x1
0041D068  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041D06E  C1 E2 10                  SHL EDX,0x10
0041D071  0B D0                     OR EDX,EAX
0041D073  52                        PUSH EDX
0041D074  6A 10                     PUSH 0x10
0041D076  51                        PUSH ECX
0041D077  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0041D07B  D9 1C 24                  FSTP float ptr [ESP]
0041D07E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041D081  51                        PUSH ECX
0041D082  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041D085  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0041D089  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D08F  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041D092  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041D098  D9 1C 24                  FSTP float ptr [ESP]
0041D09B  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041D09E  51                        PUSH ECX
0041D09F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041D0A5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041D0AB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041D0B1  D9 1C 24                  FSTP float ptr [ESP]
0041D0B4  E8 57 96 2C 00            CALL 0x006e6710
LAB_0041d0b9:
0041D0B9  5E                        POP ESI
0041D0BA  5D                        POP EBP
0041D0BB  C2 04 00                  RET 0x4
