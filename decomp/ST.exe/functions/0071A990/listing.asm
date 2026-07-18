FUN_0071a990:
0071A990  55                        PUSH EBP
0071A991  8B EC                     MOV EBP,ESP
0071A993  53                        PUSH EBX
0071A994  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0071A997  56                        PUSH ESI
0071A998  57                        PUSH EDI
0071A999  85 DB                     TEST EBX,EBX
0071A99B  74 6A                     JZ 0x0071aa07
0071A99D  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0071A9A0  85 C0                     TEST EAX,EAX
0071A9A2  74 63                     JZ 0x0071aa07
0071A9A4  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0071A9A7  85 FF                     TEST EDI,EDI
0071A9A9  7C 5C                     JL 0x0071aa07
0071A9AB  3B 7B 08                  CMP EDI,dword ptr [EBX + 0x8]
0071A9AE  7D 57                     JGE 0x0071aa07
0071A9B0  8B 34 B8                  MOV ESI,dword ptr [EAX + EDI*0x4]
0071A9B3  85 F6                     TEST ESI,ESI
0071A9B5  74 50                     JZ 0x0071aa07
0071A9B7  8B 06                     MOV EAX,dword ptr [ESI]
0071A9B9  85 C0                     TEST EAX,EAX
0071A9BB  7E 4A                     JLE 0x0071aa07
0071A9BD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0071A9C0  85 D2                     TEST EDX,EDX
0071A9C2  7C 04                     JL 0x0071a9c8
0071A9C4  3B D0                     CMP EDX,EAX
0071A9C6  7C 17                     JL 0x0071a9df
LAB_0071a9c8:
0071A9C8  83 F8 01                  CMP EAX,0x1
0071A9CB  7E 10                     JLE 0x0071a9dd
0071A9CD  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0071A9D0  8B 34 B8                  MOV ESI,dword ptr [EAX + EDI*0x4]
0071A9D3  E8 E8 3C 01 00            CALL 0x0072e6c0
0071A9D8  99                        CDQ
0071A9D9  F7 3E                     IDIV dword ptr [ESI]
0071A9DB  EB 02                     JMP 0x0071a9df
LAB_0071a9dd:
0071A9DD  33 D2                     XOR EDX,EDX
LAB_0071a9df:
0071A9DF  8D 44 92 05               LEA EAX,[EDX + EDX*0x4 + 0x5]
0071A9E3  83 3C 30 00               CMP dword ptr [EAX + ESI*0x1],0x0
0071A9E7  74 1E                     JZ 0x0071aa07
0071A9E9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0071A9EC  85 C9                     TEST ECX,ECX
0071A9EE  74 09                     JZ 0x0071a9f9
0071A9F0  8D 34 96                  LEA ESI,[ESI + EDX*0x4]
0071A9F3  8A 54 32 04               MOV DL,byte ptr [EDX + ESI*0x1 + 0x4]
0071A9F7  88 11                     MOV byte ptr [ECX],DL
LAB_0071a9f9:
0071A9F9  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0071A9FC  8B 14 B9                  MOV EDX,dword ptr [ECX + EDI*0x4]
0071A9FF  5F                        POP EDI
0071AA00  5E                        POP ESI
0071AA01  5B                        POP EBX
0071AA02  8B 04 02                  MOV EAX,dword ptr [EDX + EAX*0x1]
0071AA05  5D                        POP EBP
0071AA06  C3                        RET
LAB_0071aa07:
0071AA07  5F                        POP EDI
0071AA08  5E                        POP ESI
0071AA09  33 C0                     XOR EAX,EAX
0071AA0B  5B                        POP EBX
0071AA0C  5D                        POP EBP
0071AA0D  C3                        RET
