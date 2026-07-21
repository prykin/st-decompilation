LoadResourceString:
006B0140  55                        PUSH EBP
006B0141  8B EC                     MOV EBP,ESP
006B0143  A1 E0 68 85 00            MOV EAX,[0x008568e0]
006B0148  05 00 08 00 00            ADD EAX,0x800
006B014D  3D 04 10 00 00            CMP EAX,0x1004
006B0152  7E 0A                     JLE 0x006b015e
006B0154  C7 05 E0 68 85 00 00 00 00 00  MOV dword ptr [0x008568e0],0x0
LAB_006b015e:
006B015E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B0161  85 C0                     TEST EAX,EAX
006B0163  75 07                     JNZ 0x006b016c
006B0165  50                        PUSH EAX
006B0166  FF 15 4C BC 85 00         CALL dword ptr [0x0085bc4c]
LAB_006b016c:
006B016C  8B 0D E0 68 85 00         MOV ECX,dword ptr [0x008568e0]
006B0172  68 00 08 00 00            PUSH 0x800
006B0177  8D 91 60 7A 85 00         LEA EDX,[ECX + 0x857a60]
006B017D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B0180  52                        PUSH EDX
006B0181  51                        PUSH ECX
006B0182  50                        PUSH EAX
006B0183  FF 15 44 BE 85 00         CALL dword ptr [0x0085be44]
006B0189  8B 15 E0 68 85 00         MOV EDX,dword ptr [0x008568e0]
006B018F  8B C8                     MOV ECX,EAX
006B0191  85 C9                     TEST ECX,ECX
006B0193  8D 82 60 7A 85 00         LEA EAX,[EDX + 0x857a60]
006B0199  74 08                     JZ 0x006b01a3
006B019B  81 F9 00 08 00 00         CMP ECX,0x800
006B01A1  72 13                     JC 0x006b01b6
LAB_006b01a3:
006B01A3  33 C9                     XOR ECX,ECX
006B01A5  C6 00 00                  MOV byte ptr [EAX],0x0
006B01A8  8D 54 0A 01               LEA EDX,[EDX + ECX*0x1 + 0x1]
006B01AC  89 15 E0 68 85 00         MOV dword ptr [0x008568e0],EDX
006B01B2  5D                        POP EBP
006B01B3  C2 08 00                  RET 0x8
LAB_006b01b6:
006B01B6  8D 4C 0A 01               LEA ECX,[EDX + ECX*0x1 + 0x1]
006B01BA  89 0D E0 68 85 00         MOV dword ptr [0x008568e0],ECX
006B01C0  5D                        POP EBP
006B01C1  C2 08 00                  RET 0x8
