FUN_0061fcc0:
0061FCC0  56                        PUSH ESI
0061FCC1  8B F1                     MOV ESI,ECX
0061FCC3  57                        PUSH EDI
0061FCC4  33 FF                     XOR EDI,EDI
0061FCC6  8B 86 B9 00 00 00         MOV EAX,dword ptr [ESI + 0xb9]
0061FCCC  3B C7                     CMP EAX,EDI
0061FCCE  74 0C                     JZ 0x0061fcdc
0061FCD0  50                        PUSH EAX
0061FCD1  E8 3A E4 08 00            CALL 0x006ae110
0061FCD6  89 BE B9 00 00 00         MOV dword ptr [ESI + 0xb9],EDI
LAB_0061fcdc:
0061FCDC  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
0061FCE2  3B C7                     CMP EAX,EDI
0061FCE4  74 0C                     JZ 0x0061fcf2
0061FCE6  50                        PUSH EAX
0061FCE7  E8 24 E4 08 00            CALL 0x006ae110
0061FCEC  89 BE C5 00 00 00         MOV dword ptr [ESI + 0xc5],EDI
LAB_0061fcf2:
0061FCF2  8B 86 D1 00 00 00         MOV EAX,dword ptr [ESI + 0xd1]
0061FCF8  3B C7                     CMP EAX,EDI
0061FCFA  74 0C                     JZ 0x0061fd08
0061FCFC  50                        PUSH EAX
0061FCFD  E8 0E E4 08 00            CALL 0x006ae110
0061FD02  89 BE D1 00 00 00         MOV dword ptr [ESI + 0xd1],EDI
LAB_0061fd08:
0061FD08  8B 86 DD 00 00 00         MOV EAX,dword ptr [ESI + 0xdd]
0061FD0E  3B C7                     CMP EAX,EDI
0061FD10  74 0C                     JZ 0x0061fd1e
0061FD12  50                        PUSH EAX
0061FD13  E8 F8 E3 08 00            CALL 0x006ae110
0061FD18  89 BE DD 00 00 00         MOV dword ptr [ESI + 0xdd],EDI
LAB_0061fd1e:
0061FD1E  8B 86 E9 00 00 00         MOV EAX,dword ptr [ESI + 0xe9]
0061FD24  3B C7                     CMP EAX,EDI
0061FD26  74 0C                     JZ 0x0061fd34
0061FD28  50                        PUSH EAX
0061FD29  E8 E2 E3 08 00            CALL 0x006ae110
0061FD2E  89 BE E9 00 00 00         MOV dword ptr [ESI + 0xe9],EDI
LAB_0061fd34:
0061FD34  8B 86 F5 00 00 00         MOV EAX,dword ptr [ESI + 0xf5]
0061FD3A  3B C7                     CMP EAX,EDI
0061FD3C  74 0C                     JZ 0x0061fd4a
0061FD3E  50                        PUSH EAX
0061FD3F  E8 CC E3 08 00            CALL 0x006ae110
0061FD44  89 BE F5 00 00 00         MOV dword ptr [ESI + 0xf5],EDI
LAB_0061fd4a:
0061FD4A  8B 86 01 01 00 00         MOV EAX,dword ptr [ESI + 0x101]
0061FD50  3B C7                     CMP EAX,EDI
0061FD52  74 0C                     JZ 0x0061fd60
0061FD54  50                        PUSH EAX
0061FD55  E8 B6 E3 08 00            CALL 0x006ae110
0061FD5A  89 BE 01 01 00 00         MOV dword ptr [ESI + 0x101],EDI
LAB_0061fd60:
0061FD60  8B 86 0A 01 00 00         MOV EAX,dword ptr [ESI + 0x10a]
0061FD66  3B C7                     CMP EAX,EDI
0061FD68  74 0C                     JZ 0x0061fd76
0061FD6A  50                        PUSH EAX
0061FD6B  E8 A0 E3 08 00            CALL 0x006ae110
0061FD70  89 BE 0A 01 00 00         MOV dword ptr [ESI + 0x10a],EDI
LAB_0061fd76:
0061FD76  5F                        POP EDI
0061FD77  5E                        POP ESI
0061FD78  C3                        RET
