FUN_0060e470:
0060E470  55                        PUSH EBP
0060E471  8B EC                     MOV EBP,ESP
0060E473  51                        PUSH ECX
0060E474  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060E477  53                        PUSH EBX
0060E478  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0060E47B  56                        PUSH ESI
0060E47C  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
0060E47F  57                        PUSH EDI
0060E480  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0060E483  8B D3                     MOV EDX,EBX
0060E485  2B D7                     SUB EDX,EDI
0060E487  8B CE                     MOV ECX,ESI
0060E489  8B FA                     MOV EDI,EDX
0060E48B  2B C8                     SUB ECX,EAX
0060E48D  0F AF FA                  IMUL EDI,EDX
0060E490  8B D1                     MOV EDX,ECX
0060E492  0F AF D1                  IMUL EDX,ECX
0060E495  03 FA                     ADD EDI,EDX
0060E497  81 FF 49 A7 22 00         CMP EDI,0x22a749
0060E49D  0F 8D 49 01 00 00         JGE 0x0060e5ec
0060E4A3  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0060E4A6  8B D3                     MOV EDX,EBX
0060E4A8  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0060E4AB  8B CE                     MOV ECX,ESI
0060E4AD  2B D3                     SUB EDX,EBX
0060E4AF  2B CF                     SUB ECX,EDI
0060E4B1  8B F2                     MOV ESI,EDX
0060E4B3  0F AF F2                  IMUL ESI,EDX
0060E4B6  8B D1                     MOV EDX,ECX
0060E4B8  0F AF D1                  IMUL EDX,ECX
0060E4BB  03 F2                     ADD ESI,EDX
0060E4BD  81 FE 49 A7 22 00         CMP ESI,0x22a749
0060E4C3  7F 4B                     JG 0x0060e510
0060E4C5  2B C7                     SUB EAX,EDI
0060E4C7  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
0060E4CA  99                        CDQ
0060E4CB  83 E2 07                  AND EDX,0x7
0060E4CE  03 C2                     ADD EAX,EDX
0060E4D0  C1 F8 03                  SAR EAX,0x3
0060E4D3  03 C7                     ADD EAX,EDI
0060E4D5  5F                        POP EDI
0060E4D6  89 01                     MOV dword ptr [ECX],EAX
0060E4D8  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060E4DB  2B C3                     SUB EAX,EBX
0060E4DD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060E4E0  99                        CDQ
0060E4E1  83 E2 07                  AND EDX,0x7
0060E4E4  5E                        POP ESI
0060E4E5  03 C2                     ADD EAX,EDX
0060E4E7  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0060E4EA  C1 F8 03                  SAR EAX,0x3
0060E4ED  03 C3                     ADD EAX,EBX
0060E4EF  5B                        POP EBX
0060E4F0  89 02                     MOV dword ptr [EDX],EAX
0060E4F2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060E4F5  2B C1                     SUB EAX,ECX
0060E4F7  99                        CDQ
0060E4F8  83 E2 07                  AND EDX,0x7
0060E4FB  03 C2                     ADD EAX,EDX
0060E4FD  C1 F8 03                  SAR EAX,0x3
0060E500  03 C1                     ADD EAX,ECX
0060E502  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
0060E505  89 01                     MOV dword ptr [ECX],EAX
0060E507  B8 01 00 00 00            MOV EAX,0x1
0060E50C  8B E5                     MOV ESP,EBP
0060E50E  5D                        POP EBP
0060E50F  C3                        RET
LAB_0060e510:
0060E510  2B C7                     SUB EAX,EDI
0060E512  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
0060E515  99                        CDQ
0060E516  2B C2                     SUB EAX,EDX
0060E518  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0060E51B  8B C8                     MOV ECX,EAX
0060E51D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060E520  2B C3                     SUB EAX,EBX
0060E522  99                        CDQ
0060E523  2B C2                     SUB EAX,EDX
0060E525  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060E528  8B F0                     MOV ESI,EAX
0060E52A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060E52D  2B C2                     SUB EAX,EDX
0060E52F  99                        CDQ
0060E530  2B C2                     SUB EAX,EDX
0060E532  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060E535  D1 F9                     SAR ECX,0x1
0060E537  D1 FE                     SAR ESI,0x1
0060E539  D1 F8                     SAR EAX,0x1
0060E53B  03 CF                     ADD ECX,EDI
0060E53D  03 F3                     ADD ESI,EBX
0060E53F  03 C2                     ADD EAX,EDX
0060E541  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0060E544  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0060E547  C7 45 14 03 00 00 00      MOV dword ptr [EBP + 0x14],0x3
0060E54E  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0060E551  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060E554  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0060E557  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0060E55A  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_0060e55d:
0060E55D  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
0060E560  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
0060E563  8B D1                     MOV EDX,ECX
0060E565  2B D7                     SUB EDX,EDI
0060E567  8B FE                     MOV EDI,ESI
0060E569  2B FB                     SUB EDI,EBX
0060E56B  8B DF                     MOV EBX,EDI
0060E56D  0F AF DF                  IMUL EBX,EDI
0060E570  8B FA                     MOV EDI,EDX
0060E572  0F AF FA                  IMUL EDI,EDX
0060E575  03 DF                     ADD EBX,EDI
0060E577  81 FB 49 A7 22 00         CMP EBX,0x22a749
0060E57D  7E 0F                     JLE 0x0060e58e
0060E57F  8B F9                     MOV EDI,ECX
0060E581  8B DE                     MOV EBX,ESI
0060E583  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
0060E586  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
0060E589  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
0060E58C  EB 0F                     JMP 0x0060e59d
LAB_0060e58e:
0060E58E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0060E591  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0060E594  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0060E597  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0060E59A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0060e59d:
0060E59D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060E5A0  2B C7                     SUB EAX,EDI
0060E5A2  99                        CDQ
0060E5A3  2B C2                     SUB EAX,EDX
0060E5A5  8B C8                     MOV ECX,EAX
0060E5A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060E5AA  2B C3                     SUB EAX,EBX
0060E5AC  99                        CDQ
0060E5AD  D1 F9                     SAR ECX,0x1
0060E5AF  2B C2                     SUB EAX,EDX
0060E5B1  03 CF                     ADD ECX,EDI
0060E5B3  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
0060E5B6  8B F0                     MOV ESI,EAX
0060E5B8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060E5BB  2B C7                     SUB EAX,EDI
0060E5BD  99                        CDQ
0060E5BE  2B C2                     SUB EAX,EDX
0060E5C0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0060E5C3  D1 FE                     SAR ESI,0x1
0060E5C5  D1 F8                     SAR EAX,0x1
0060E5C7  03 F3                     ADD ESI,EBX
0060E5C9  03 C7                     ADD EAX,EDI
0060E5CB  4A                        DEC EDX
0060E5CC  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0060E5CF  75 8C                     JNZ 0x0060e55d
0060E5D1  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0060E5D4  5F                        POP EDI
0060E5D5  89 0A                     MOV dword ptr [EDX],ECX
0060E5D7  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0060E5DA  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
0060E5DD  89 31                     MOV dword ptr [ECX],ESI
0060E5DF  5E                        POP ESI
0060E5E0  89 02                     MOV dword ptr [EDX],EAX
0060E5E2  B8 01 00 00 00            MOV EAX,0x1
0060E5E7  5B                        POP EBX
0060E5E8  8B E5                     MOV ESP,EBP
0060E5EA  5D                        POP EBP
0060E5EB  C3                        RET
LAB_0060e5ec:
0060E5EC  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
0060E5EF  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0060E5F2  5F                        POP EDI
0060E5F3  5E                        POP ESI
0060E5F4  89 01                     MOV dword ptr [ECX],EAX
0060E5F6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060E5F9  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
0060E5FC  89 02                     MOV dword ptr [EDX],EAX
0060E5FE  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0060E601  33 C0                     XOR EAX,EAX
0060E603  89 11                     MOV dword ptr [ECX],EDX
0060E605  5B                        POP EBX
0060E606  8B E5                     MOV ESP,EBP
0060E608  5D                        POP EBP
0060E609  C3                        RET
