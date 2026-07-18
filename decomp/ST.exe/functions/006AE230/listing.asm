FUN_006ae230:
006AE230  55                        PUSH EBP
006AE231  8B EC                     MOV EBP,ESP
006AE233  56                        PUSH ESI
006AE234  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006AE237  57                        PUSH EDI
006AE238  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006AE23B  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006AE23E  03 C1                     ADD EAX,ECX
006AE240  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006AE243  0F AF 46 08               IMUL EAX,dword ptr [ESI + 0x8]
006AE247  50                        PUSH EAX
006AE248  51                        PUSH ECX
006AE249  E8 02 ED FF FF            CALL 0x006acf50
006AE24E  8B F8                     MOV EDI,EAX
006AE250  85 FF                     TEST EDI,EDI
006AE252  75 0B                     JNZ 0x006ae25f
006AE254  5F                        POP EDI
006AE255  B8 FE FF FF FF            MOV EAX,0xfffffffe
006AE25A  5E                        POP ESI
006AE25B  5D                        POP EBP
006AE25C  C2 04 00                  RET 0x4
LAB_006ae25f:
006AE25F  8B 06                     MOV EAX,dword ptr [ESI]
006AE261  F6 C4 01                  TEST AH,0x1
006AE264  74 0C                     JZ 0x006ae272
006AE266  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006AE269  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006AE26C  52                        PUSH EDX
006AE26D  50                        PUSH EAX
006AE26E  57                        PUSH EDI
006AE26F  FF 56 18                  CALL dword ptr [ESI + 0x18]
LAB_006ae272:
006AE272  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006AE275  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006AE278  03 C1                     ADD EAX,ECX
006AE27A  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
006AE27D  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006AE280  5F                        POP EDI
006AE281  33 C0                     XOR EAX,EAX
006AE283  5E                        POP ESI
006AE284  5D                        POP EBP
006AE285  C2 04 00                  RET 0x4
