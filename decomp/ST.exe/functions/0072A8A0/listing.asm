FUN_0072a8a0:
0072A8A0  55                        PUSH EBP
0072A8A1  8B EC                     MOV EBP,ESP
0072A8A3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072A8A6  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072A8A9  53                        PUSH EBX
0072A8AA  56                        PUSH ESI
0072A8AB  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072A8AE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0072A8B1  57                        PUSH EDI
0072A8B2  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072A8B5  3B F9                     CMP EDI,ECX
0072A8B7  7D 75                     JGE 0x0072a92e
LAB_0072a8b9:
0072A8B9  8B 08                     MOV ECX,dword ptr [EAX]
0072A8BB  49                        DEC ECX
0072A8BC  89 08                     MOV dword ptr [EAX],ECX
0072A8BE  78 6E                     JS 0x0072a92e
0072A8C0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072A8C3  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072A8C6  03 F3                     ADD ESI,EBX
0072A8C8  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
0072A8CB  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A8CE  D1 E9                     SHR ECX,0x1
0072A8D0  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072A8D3  75 07                     JNZ 0x0072a8dc
0072A8D5  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a8dc:
0072A8DC  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072A8DF  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072A8E2  03 D9                     ADD EBX,ECX
0072A8E4  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072A8E7  8B CB                     MOV ECX,EBX
0072A8E9  C1 EB 10                  SHR EBX,0x10
0072A8EC  74 2B                     JZ 0x0072a919
0072A8EE  8B 58 20                  MOV EBX,dword ptr [EAX + 0x20]
0072A8F1  46                        INC ESI
0072A8F2  83 C2 02                  ADD EDX,0x2
0072A8F5  D1 EB                     SHR EBX,0x1
0072A8F7  89 58 20                  MOV dword ptr [EAX + 0x20],EBX
0072A8FA  75 07                     JNZ 0x0072a903
0072A8FC  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a903:
0072A903  81 E1 FF FF 00 00         AND ECX,0xffff
0072A909  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0072A90C  8D 4F 01                  LEA ECX,[EDI + 0x1]
0072A90F  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072A912  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0072A915  3B CF                     CMP ECX,EDI
0072A917  7D 15                     JGE 0x0072a92e
LAB_0072a919:
0072A919  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072A91C  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
0072A91F  03 F9                     ADD EDI,ECX
0072A921  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072A924  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
0072A927  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072A92A  3B F9                     CMP EDI,ECX
0072A92C  7C 8B                     JL 0x0072a8b9
LAB_0072a92e:
0072A92E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0072A931  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072A934  3B CF                     CMP ECX,EDI
0072A936  0F 8D 82 00 00 00         JGE 0x0072a9be
0072A93C  8B 08                     MOV ECX,dword ptr [EAX]
0072A93E  49                        DEC ECX
0072A93F  89 08                     MOV dword ptr [EAX],ECX
0072A941  78 7B                     JS 0x0072a9be
0072A943  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072A946  8D 3C 09                  LEA EDI,[ECX + ECX*0x1]
LAB_0072a949:
0072A949  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A94C  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0072A94F  85 CB                     TEST EBX,ECX
0072A951  74 14                     JZ 0x0072a967
0072A953  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0072A956  33 DB                     XOR EBX,EBX
0072A958  66 8B 1A                  MOV BX,word ptr [EDX]
0072A95B  C1 F9 10                  SAR ECX,0x10
0072A95E  3B CB                     CMP ECX,EBX
0072A960  7D 05                     JGE 0x0072a967
0072A962  8A 4D 1C                  MOV CL,byte ptr [EBP + 0x1c]
0072A965  88 0E                     MOV byte ptr [ESI],CL
LAB_0072a967:
0072A967  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
0072A96A  D1 E9                     SHR ECX,0x1
0072A96C  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
0072A96F  75 07                     JNZ 0x0072a978
0072A971  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a978:
0072A978  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072A97B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0072A97E  03 F3                     ADD ESI,EBX
0072A980  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072A983  03 D9                     ADD EBX,ECX
0072A985  03 D7                     ADD EDX,EDI
0072A987  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072A98A  8B CB                     MOV ECX,EBX
0072A98C  C1 EB 10                  SHR EBX,0x10
0072A98F  74 1B                     JZ 0x0072a9ac
0072A991  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0072A994  81 E1 FF FF 00 00         AND ECX,0xffff
0072A99A  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0072A99D  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0072A9A0  46                        INC ESI
0072A9A1  83 C2 02                  ADD EDX,0x2
0072A9A4  41                        INC ECX
0072A9A5  3B CB                     CMP ECX,EBX
0072A9A7  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0072A9AA  7D 12                     JGE 0x0072a9be
LAB_0072a9ac:
0072A9AC  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0072A9AF  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
0072A9B2  03 D9                     ADD EBX,ECX
0072A9B4  8B 08                     MOV ECX,dword ptr [EAX]
0072A9B6  49                        DEC ECX
0072A9B7  89 58 18                  MOV dword ptr [EAX + 0x18],EBX
0072A9BA  89 08                     MOV dword ptr [EAX],ECX
0072A9BC  79 8B                     JNS 0x0072a949
LAB_0072a9be:
0072A9BE  5F                        POP EDI
0072A9BF  5E                        POP ESI
0072A9C0  5B                        POP EBX
0072A9C1  5D                        POP EBP
0072A9C2  C3                        RET
