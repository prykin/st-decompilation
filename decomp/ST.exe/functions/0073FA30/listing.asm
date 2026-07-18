FUN_0073fa30:
0073FA30  55                        PUSH EBP
0073FA31  8B EC                     MOV EBP,ESP
0073FA33  83 EC 0C                  SUB ESP,0xc
0073FA36  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0073FA3D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FA40  25 FF FF 00 00            AND EAX,0xffff
0073FA45  83 E0 01                  AND EAX,0x1
0073FA48  85 C0                     TEST EAX,EAX
0073FA4A  74 09                     JZ 0x0073fa55
0073FA4C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FA4F  83 C9 10                  OR ECX,0x10
0073FA52  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073fa55:
0073FA55  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FA58  81 E2 FF FF 00 00         AND EDX,0xffff
0073FA5E  83 E2 04                  AND EDX,0x4
0073FA61  85 D2                     TEST EDX,EDX
0073FA63  74 08                     JZ 0x0073fa6d
0073FA65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FA68  0C 08                     OR AL,0x8
0073FA6A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073fa6d:
0073FA6D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FA70  81 E1 FF FF 00 00         AND ECX,0xffff
0073FA76  83 E1 08                  AND ECX,0x8
0073FA79  85 C9                     TEST ECX,ECX
0073FA7B  74 09                     JZ 0x0073fa86
0073FA7D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073FA80  83 CA 04                  OR EDX,0x4
0073FA83  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073fa86:
0073FA86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FA89  25 FF FF 00 00            AND EAX,0xffff
0073FA8E  83 E0 10                  AND EAX,0x10
0073FA91  85 C0                     TEST EAX,EAX
0073FA93  74 09                     JZ 0x0073fa9e
0073FA95  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FA98  83 C9 02                  OR ECX,0x2
0073FA9B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073fa9e:
0073FA9E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FAA1  81 E2 FF FF 00 00         AND EDX,0xffff
0073FAA7  83 E2 20                  AND EDX,0x20
0073FAAA  85 D2                     TEST EDX,EDX
0073FAAC  74 08                     JZ 0x0073fab6
0073FAAE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FAB1  0C 01                     OR AL,0x1
0073FAB3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0073fab6:
0073FAB6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073FAB9  81 E1 FF FF 00 00         AND ECX,0xffff
0073FABF  83 E1 02                  AND ECX,0x2
0073FAC2  85 C9                     TEST ECX,ECX
0073FAC4  74 0C                     JZ 0x0073fad2
0073FAC6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073FAC9  81 CA 00 00 08 00         OR EDX,0x80000
0073FACF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073fad2:
0073FAD2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FAD5  25 FF FF 00 00            AND EAX,0xffff
0073FADA  25 00 0C 00 00            AND EAX,0xc00
0073FADF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073FAE2  81 7D F8 00 08 00 00      CMP dword ptr [EBP + -0x8],0x800
0073FAE9  7F 1A                     JG 0x0073fb05
0073FAEB  81 7D F8 00 08 00 00      CMP dword ptr [EBP + -0x8],0x800
0073FAF2  74 24                     JZ 0x0073fb18
0073FAF4  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073FAF8  74 16                     JZ 0x0073fb10
0073FAFA  81 7D F8 00 04 00 00      CMP dword ptr [EBP + -0x8],0x400
0073FB01  74 20                     JZ 0x0073fb23
0073FB03  EB 32                     JMP 0x0073fb37
LAB_0073fb05:
0073FB05  81 7D F8 00 0C 00 00      CMP dword ptr [EBP + -0x8],0xc00
0073FB0C  74 20                     JZ 0x0073fb2e
0073FB0E  EB 27                     JMP 0x0073fb37
LAB_0073fb10:
0073FB10  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FB13  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073FB16  EB 1F                     JMP 0x0073fb37
LAB_0073fb18:
0073FB18  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073FB1B  80 CE 02                  OR DH,0x2
0073FB1E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0073FB21  EB 14                     JMP 0x0073fb37
LAB_0073fb23:
0073FB23  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FB26  80 CC 01                  OR AH,0x1
0073FB29  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073FB2C  EB 09                     JMP 0x0073fb37
LAB_0073fb2e:
0073FB2E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FB31  80 CD 03                  OR CH,0x3
0073FB34  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073fb37:
0073FB37  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073FB3A  81 E2 FF FF 00 00         AND EDX,0xffff
0073FB40  81 E2 00 03 00 00         AND EDX,0x300
0073FB46  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0073FB49  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
0073FB4D  74 2A                     JZ 0x0073fb79
0073FB4F  81 7D F4 00 02 00 00      CMP dword ptr [EBP + -0xc],0x200
0073FB56  74 13                     JZ 0x0073fb6b
0073FB58  81 7D F4 00 03 00 00      CMP dword ptr [EBP + -0xc],0x300
0073FB5F  74 02                     JZ 0x0073fb63
0073FB61  EB 22                     JMP 0x0073fb85
LAB_0073fb63:
0073FB63  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FB66  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073FB69  EB 1A                     JMP 0x0073fb85
LAB_0073fb6b:
0073FB6B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FB6E  81 C9 00 00 01 00         OR ECX,0x10000
0073FB74  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0073FB77  EB 0C                     JMP 0x0073fb85
LAB_0073fb79:
0073FB79  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0073FB7C  81 CA 00 00 02 00         OR EDX,0x20000
0073FB82  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0073fb85:
0073FB85  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073FB88  25 FF FF 00 00            AND EAX,0xffff
0073FB8D  25 00 10 00 00            AND EAX,0x1000
0073FB92  85 C0                     TEST EAX,EAX
0073FB94  74 0C                     JZ 0x0073fba2
0073FB96  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073FB99  81 C9 00 00 04 00         OR ECX,0x40000
0073FB9F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0073fba2:
0073FBA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073FBA5  8B E5                     MOV ESP,EBP
0073FBA7  5D                        POP EBP
0073FBA8  C3                        RET
