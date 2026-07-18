FUN_0041ce40:
0041CE40  55                        PUSH EBP
0041CE41  8B EC                     MOV EBP,ESP
0041CE43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041CE46  56                        PUSH ESI
0041CE47  8B F1                     MOV ESI,ECX
0041CE49  89 86 05 01 00 00         MOV dword ptr [ESI + 0x105],EAX
0041CE4F  8B 0D 88 2A 80 00         MOV ECX,dword ptr [0x00802a88]
0041CE55  85 C9                     TEST ECX,ECX
0041CE57  74 1F                     JZ 0x0041ce78
0041CE59  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041CE5C  6A FF                     PUSH -0x1
0041CE5E  52                        PUSH EDX
0041CE5F  50                        PUSH EAX
0041CE60  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
0041CE64  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041CE67  50                        PUSH EAX
0041CE68  52                        PUSH EDX
0041CE69  0F BF 46 5D               MOVSX EAX,word ptr [ESI + 0x5d]
0041CE6D  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
0041CE71  50                        PUSH EAX
0041CE72  52                        PUSH EDX
0041CE73  E8 B2 5D FE FF            CALL 0x00402c2a
LAB_0041ce78:
0041CE78  8B 06                     MOV EAX,dword ptr [ESI]
0041CE7A  8B CE                     MOV ECX,ESI
0041CE7C  FF 50 08                  CALL dword ptr [EAX + 0x8]
0041CE7F  83 F8 01                  CMP EAX,0x1
0041CE82  75 7E                     JNZ 0x0041cf02
0041CE84  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0041CE87  33 C9                     XOR ECX,ECX
0041CE89  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0041CE8F  3B C1                     CMP EAX,ECX
0041CE91  75 6F                     JNZ 0x0041cf02
0041CE93  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0041CE96  33 C0                     XOR EAX,EAX
0041CE98  DB 86 05 01 00 00         FILD dword ptr [ESI + 0x105]
0041CE9E  66 8B 46 18               MOV AX,word ptr [ESI + 0x18]
0041CEA2  C1 EA 10                  SHR EDX,0x10
0041CEA5  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041CEAB  81 E2 FF 00 00 00         AND EDX,0xff
0041CEB1  C1 E2 10                  SHL EDX,0x10
0041CEB4  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
0041CEBA  0B D0                     OR EDX,EAX
0041CEBC  52                        PUSH EDX
0041CEBD  6A 16                     PUSH 0x16
0041CEBF  51                        PUSH ECX
0041CEC0  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
0041CEC4  D9 1C 24                  FSTP float ptr [ESP]
0041CEC7  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0041CECA  51                        PUSH ECX
0041CECB  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041CECE  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
0041CED2  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041CED8  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0041CEDB  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041CEE1  D9 1C 24                  FSTP float ptr [ESP]
0041CEE4  DB 45 08                  FILD dword ptr [EBP + 0x8]
0041CEE7  51                        PUSH ECX
0041CEE8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0041CEEE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0041CEF4  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0041CEFA  D9 1C 24                  FSTP float ptr [ESP]
0041CEFD  E8 0E 98 2C 00            CALL 0x006e6710
LAB_0041cf02:
0041CF02  5E                        POP ESI
0041CF03  5D                        POP EBP
0041CF04  C2 04 00                  RET 0x4
