FUN_0057bd70:
0057BD70  55                        PUSH EBP
0057BD71  8B EC                     MOV EBP,ESP
0057BD73  83 EC 10                  SUB ESP,0x10
0057BD76  8B 81 67 02 00 00         MOV EAX,dword ptr [ECX + 0x267]
0057BD7C  53                        PUSH EBX
0057BD7D  56                        PUSH ESI
0057BD7E  57                        PUSH EDI
0057BD7F  05 19 FF FF FF            ADD EAX,0xffffff19
0057BD84  33 D2                     XOR EDX,EDX
0057BD86  33 F6                     XOR ESI,ESI
0057BD88  33 FF                     XOR EDI,EDI
0057BD8A  83 F8 04                  CMP EAX,0x4
0057BD8D  77 25                     JA 0x0057bdb4
switchD_0057bd8f::switchD:
0057BD8F  FF 24 85 70 BE 57 00      JMP dword ptr [EAX*0x4 + 0x57be70]
switchD_0057bd8f::caseD_e7:
0057BD96  BA 1C 00 00 00            MOV EDX,0x1c
0057BD9B  8B F2                     MOV ESI,EDX
0057BD9D  8B FA                     MOV EDI,EDX
0057BD9F  EB 13                     JMP 0x0057bdb4
switchD_0057bd8f::caseD_eb:
0057BDA1  BA 1C 00 00 00            MOV EDX,0x1c
0057BDA6  EB 05                     JMP 0x0057bdad
switchD_0057bd8f::caseD_e8:
0057BDA8  BA 16 00 00 00            MOV EDX,0x16
LAB_0057bdad:
0057BDAD  BE 0C 00 00 00            MOV ESI,0xc
0057BDB2  8B FE                     MOV EDI,ESI
switchD_0057bd8f::default:
0057BDB4  66 8B 59 43               MOV BX,word ptr [ECX + 0x43]
0057BDB8  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
0057BDBC  66 8B 49 45               MOV CX,word ptr [ECX + 0x45]
0057BDC0  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0057BDC3  2B DE                     SUB EBX,ESI
0057BDC5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057BDC8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0057BDCB  8B D9                     MOV EBX,ECX
0057BDCD  2B DF                     SUB EBX,EDI
0057BDCF  2B C2                     SUB EAX,EDX
0057BDD1  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0057BDD4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0057BDD7  03 D3                     ADD EDX,EBX
0057BDD9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0057BDDC  03 F3                     ADD ESI,EBX
0057BDDE  66 8B 5D 08               MOV BX,word ptr [EBP + 0x8]
0057BDE2  03 F9                     ADD EDI,ECX
0057BDE4  66 3B D8                  CMP BX,AX
0057BDE7  7C 05                     JL 0x0057bdee
0057BDE9  66 3B DA                  CMP BX,DX
0057BDEC  7E 18                     JLE 0x0057be06
LAB_0057bdee:
0057BDEE  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
0057BDF2  66 3B C8                  CMP CX,AX
0057BDF5  7C 05                     JL 0x0057bdfc
0057BDF7  66 3B CA                  CMP CX,DX
0057BDFA  7E 0A                     JLE 0x0057be06
LAB_0057bdfc:
0057BDFC  66 3B D8                  CMP BX,AX
0057BDFF  7F 62                     JG 0x0057be63
0057BE01  66 3B CA                  CMP CX,DX
0057BE04  7C 5D                     JL 0x0057be63
LAB_0057be06:
0057BE06  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0057BE0A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057BE0D  66 3B CA                  CMP CX,DX
0057BE10  7C 05                     JL 0x0057be17
0057BE12  66 3B CE                  CMP CX,SI
0057BE15  7E 18                     JLE 0x0057be2f
LAB_0057be17:
0057BE17  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
0057BE1B  66 3B C2                  CMP AX,DX
0057BE1E  7C 05                     JL 0x0057be25
0057BE20  66 3B C6                  CMP AX,SI
0057BE23  7E 0A                     JLE 0x0057be2f
LAB_0057be25:
0057BE25  66 3B CA                  CMP CX,DX
0057BE28  7F 39                     JG 0x0057be63
0057BE2A  66 3B C6                  CMP AX,SI
0057BE2D  7C 34                     JL 0x0057be63
LAB_0057be2f:
0057BE2F  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0057BE33  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0057BE36  66 3B CA                  CMP CX,DX
0057BE39  7C 05                     JL 0x0057be40
0057BE3B  66 3B CF                  CMP CX,DI
0057BE3E  7E 18                     JLE 0x0057be58
LAB_0057be40:
0057BE40  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
0057BE44  66 3B C2                  CMP AX,DX
0057BE47  7C 05                     JL 0x0057be4e
0057BE49  66 3B C7                  CMP AX,DI
0057BE4C  7E 0A                     JLE 0x0057be58
LAB_0057be4e:
0057BE4E  66 3B CA                  CMP CX,DX
0057BE51  7F 10                     JG 0x0057be63
0057BE53  66 3B C7                  CMP AX,DI
0057BE56  7C 0B                     JL 0x0057be63
LAB_0057be58:
0057BE58  5F                        POP EDI
0057BE59  5E                        POP ESI
0057BE5A  33 C0                     XOR EAX,EAX
0057BE5C  5B                        POP EBX
0057BE5D  8B E5                     MOV ESP,EBP
0057BE5F  5D                        POP EBP
0057BE60  C2 18 00                  RET 0x18
LAB_0057be63:
0057BE63  5F                        POP EDI
0057BE64  5E                        POP ESI
0057BE65  83 C8 FF                  OR EAX,0xffffffff
0057BE68  5B                        POP EBX
0057BE69  8B E5                     MOV ESP,EBP
0057BE6B  5D                        POP EBP
0057BE6C  C2 18 00                  RET 0x18
