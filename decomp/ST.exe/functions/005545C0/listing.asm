FUN_005545c0:
005545C0  53                        PUSH EBX
005545C1  56                        PUSH ESI
005545C2  8B F1                     MOV ESI,ECX
005545C4  57                        PUSH EDI
005545C5  33 FF                     XOR EDI,EDI
005545C7  BB 01 00 00 00            MOV EBX,0x1
005545CC  8B 06                     MOV EAX,dword ptr [ESI]
005545CE  89 7E 10                  MOV dword ptr [ESI + 0x10],EDI
005545D1  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
005545D4  89 7E 18                  MOV dword ptr [ESI + 0x18],EDI
005545D7  89 7E 14                  MOV dword ptr [ESI + 0x14],EDI
005545DA  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005545DD  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
005545E0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005545E3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005545E6  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
005545E9  89 7E 24                  MOV dword ptr [ESI + 0x24],EDI
005545EC  89 5E 2C                  MOV dword ptr [ESI + 0x2c],EBX
005545EF  89 5E 28                  MOV dword ptr [ESI + 0x28],EBX
005545F2  89 58 58                  MOV dword ptr [EAX + 0x58],EBX
005545F5  89 58 5C                  MOV dword ptr [EAX + 0x5c],EBX
005545F8  A1 18 76 80 00            MOV EAX,[0x00807618]
005545FD  50                        PUSH EAX
005545FE  68 7A 26 00 00            PUSH 0x267a
00554603  E8 38 BB 15 00            CALL 0x006b0140
00554608  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0055460B  50                        PUSH EAX
0055460C  E8 AF CB 1B 00            CALL 0x007111c0
00554611  8B 4E 2C                  MOV ECX,dword ptr [ESI + 0x2c]
00554614  89 7E 38                  MOV dword ptr [ESI + 0x38],EDI
00554617  03 C8                     ADD ECX,EAX
00554619  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0055461C  99                        CDQ
0055461D  F7 F9                     IDIV ECX
0055461F  89 4E 34                  MOV dword ptr [ESI + 0x34],ECX
00554622  89 5E 40                  MOV dword ptr [ESI + 0x40],EBX
00554625  5F                        POP EDI
00554626  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
00554629  83 C8 FF                  OR EAX,0xffffffff
0055462C  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0055462F  89 46 50                  MOV dword ptr [ESI + 0x50],EAX
00554632  8B C6                     MOV EAX,ESI
00554634  5E                        POP ESI
00554635  5B                        POP EBX
00554636  C3                        RET
