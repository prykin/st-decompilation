MReportTy::InitMReport:
005BD7A0  55                        PUSH EBP
005BD7A1  8B EC                     MOV EBP,ESP
005BD7A3  81 EC A0 06 00 00         SUB ESP,0x6a0
005BD7A9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BD7AE  53                        PUSH EBX
005BD7AF  56                        PUSH ESI
005BD7B0  57                        PUSH EDI
005BD7B1  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005BD7B4  33 FF                     XOR EDI,EDI
005BD7B6  8D 55 AC                  LEA EDX,[EBP + -0x54]
005BD7B9  8D 4D A8                  LEA ECX,[EBP + -0x58]
005BD7BC  57                        PUSH EDI
005BD7BD  52                        PUSH EDX
005BD7BE  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005BD7C1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BD7C7  E8 24 00 17 00            CALL 0x0072d7f0
005BD7CC  8B F0                     MOV ESI,EAX
005BD7CE  83 C4 08                  ADD ESP,0x8
005BD7D1  3B F7                     CMP ESI,EDI
005BD7D3  0F 85 9C 08 00 00         JNZ 0x005be075
005BD7D9  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005BD7DF  3B CF                     CMP ECX,EDI
005BD7E1  74 33                     JZ 0x005bd816
005BD7E3  39 B9 A9 00 00 00         CMP dword ptr [ECX + 0xa9],EDI
005BD7E9  74 14                     JZ 0x005bd7ff
005BD7EB  8B 41 1C                  MOV EAX,dword ptr [ECX + 0x1c]
005BD7EE  83 F8 FF                  CMP EAX,-0x1
005BD7F1  74 1E                     JZ 0x005bd811
005BD7F3  50                        PUSH EAX
005BD7F4  8B 41 60                  MOV EAX,dword ptr [ECX + 0x60]
005BD7F7  50                        PUSH EAX
005BD7F8  E8 F3 62 0F 00            CALL 0x006b3af0
005BD7FD  EB 0C                     JMP 0x005bd80b
LAB_005bd7ff:
005BD7FF  8B 89 AD 00 00 00         MOV ECX,dword ptr [ECX + 0xad]
005BD805  51                        PUSH ECX
005BD806  E8 05 B3 0F 00            CALL 0x006b8b10
LAB_005bd80b:
005BD80B  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
LAB_005bd811:
005BD811  E8 3F 38 E4 FF            CALL 0x00401055
LAB_005bd816:
005BD816  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005BD81C  BE 01 00 00 00            MOV ESI,0x1
005BD821  57                        PUSH EDI
005BD822  56                        PUSH ESI
005BD823  52                        PUSH EDX
005BD824  E8 1A 45 E4 FF            CALL 0x00401d43
005BD829  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BD82F  83 C4 0C                  ADD ESP,0xc
005BD832  E8 D5 80 E4 FF            CALL 0x0040590c
005BD837  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005BD83A  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005BD83D  C6 05 7E 87 80 00 01      MOV byte ptr [0x0080877e],0x1
005BD844  89 3D 7F 87 80 00         MOV dword ptr [0x0080877f],EDI
005BD84A  88 43 66                  MOV byte ptr [EBX + 0x66],AL
005BD84D  A0 4E 87 80 00            MOV AL,[0x0080874e]
005BD852  3C 01                     CMP AL,0x1
005BD854  75 07                     JNZ 0x005bd85d
005BD856  B8 50 A2 7C 00            MOV EAX,0x7ca250
005BD85B  EB 0E                     JMP 0x005bd86b
LAB_005bd85d:
005BD85D  3C 02                     CMP AL,0x2
005BD85F  B8 48 A2 7C 00            MOV EAX,0x7ca248
005BD864  74 05                     JZ 0x005bd86b
005BD866  B8 4C A2 7C 00            MOV EAX,0x7ca24c
LAB_005bd86b:
005BD86B  8B 0D 22 C5 80 00         MOV ECX,dword ptr [0x0080c522]
005BD871  F7 D9                     NEG ECX
005BD873  1A C9                     SBB CL,CL
005BD875  80 E1 FB                  AND CL,0xfb
005BD878  80 C1 46                  ADD CL,0x46
005BD87B  0F BE D1                  MOVSX EDX,CL
005BD87E  52                        PUSH EDX
005BD87F  50                        PUSH EAX
005BD880  68 6C CF 7C 00            PUSH 0x7ccf6c
005BD885  68 3A F3 80 00            PUSH 0x80f33a
005BD88A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BD890  A1 80 67 80 00            MOV EAX,[0x00806780]
005BD895  56                        PUSH ESI
005BD896  57                        PUSH EDI
005BD897  68 3A F3 80 00            PUSH 0x80f33a
005BD89C  50                        PUSH EAX
005BD89D  E8 4E D1 14 00            CALL 0x0070a9f0
005BD8A2  83 C4 20                  ADD ESP,0x20
005BD8A5  8D 8D 60 F9 FF FF         LEA ECX,[EBP + 0xfffff960]
005BD8AB  89 43 5D                  MOV dword ptr [EBX + 0x5d],EAX
005BD8AE  57                        PUSH EDI
005BD8AF  51                        PUSH ECX
005BD8B0  50                        PUSH EAX
005BD8B1  E8 AA EA 0F 00            CALL 0x006bc360
005BD8B6  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005BD8BC  8D 8D 60 F9 FF FF         LEA ECX,[EBP + 0xfffff960]
005BD8C2  C7 82 40 01 00 00 18 00 00 00  MOV dword ptr [EDX + 0x140],0x18
005BD8CC  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BD8D1  05 44 01 00 00            ADD EAX,0x144
005BD8D6  50                        PUSH EAX
005BD8D7  6A 10                     PUSH 0x10
005BD8D9  6A 1A                     PUSH 0x1a
005BD8DB  68 00 01 00 00            PUSH 0x100
005BD8E0  57                        PUSH EDI
005BD8E1  51                        PUSH ECX
005BD8E2  E8 99 AE 15 00            CALL 0x00718780
005BD8E7  8B 15 84 67 80 00         MOV EDX,dword ptr [0x00806784]
005BD8ED  57                        PUSH EDI
005BD8EE  57                        PUSH EDI
005BD8EF  56                        PUSH ESI
005BD8F0  57                        PUSH EDI
005BD8F1  6A FF                     PUSH -0x1
005BD8F3  68 64 CF 7C 00            PUSH 0x7ccf64
005BD8F8  6A 0B                     PUSH 0xb
005BD8FA  52                        PUSH EDX
005BD8FB  E8 F0 C1 14 00            CALL 0x00709af0
005BD900  89 43 7F                  MOV dword ptr [EBX + 0x7f],EAX
005BD903  A1 80 67 80 00            MOV EAX,[0x00806780]
005BD908  56                        PUSH ESI
005BD909  57                        PUSH EDI
005BD90A  68 58 CF 7C 00            PUSH 0x7ccf58
005BD90F  50                        PUSH EAX
005BD910  E8 3B D1 14 00            CALL 0x0070aa50
005BD915  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005BD918  83 C4 48                  ADD ESP,0x48
005BD91B  89 43 6F                  MOV dword ptr [EBX + 0x6f],EAX
005BD91E  8A 0D D9 7D 80 00         MOV CL,byte ptr [0x00807dd9]
005BD924  51                        PUSH ECX
005BD925  57                        PUSH EDI
005BD926  52                        PUSH EDX
005BD927  E8 79 69 E4 FF            CALL 0x004042a5
005BD92C  89 83 83 00 00 00         MOV dword ptr [EBX + 0x83],EAX
005BD932  89 70 58                  MOV dword ptr [EAX + 0x58],ESI
005BD935  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
005BD938  A0 D9 7D 80 00            MOV AL,[0x00807dd9]
005BD93D  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
005BD940  50                        PUSH EAX
005BD941  57                        PUSH EDI
005BD942  51                        PUSH ECX
005BD943  E8 BE 49 E4 FF            CALL 0x00402306
005BD948  89 83 87 00 00 00         MOV dword ptr [EBX + 0x87],EAX
005BD94E  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005BD954  57                        PUSH EDI
005BD955  68 4C CF 7C 00            PUSH 0x7ccf4c
005BD95A  89 42 38                  MOV dword ptr [EDX + 0x38],EAX
005BD95D  A1 80 67 80 00            MOV EAX,[0x00806780]
005BD962  50                        PUSH EAX
005BD963  68 9D 01 00 00            PUSH 0x19d
005BD968  E8 43 F5 14 00            CALL 0x0070ceb0
005BD96D  83 C4 28                  ADD ESP,0x28
005BD970  89 83 8B 00 00 00         MOV dword ptr [EBX + 0x8b],EAX
005BD976  89 70 58                  MOV dword ptr [EAX + 0x58],ESI
005BD979  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
005BD97C  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005BD97F  56                        PUSH ESI
005BD980  8D 48 28                  LEA ECX,[EAX + 0x28]
005BD983  51                        PUSH ECX
005BD984  50                        PUSH EAX
005BD985  E8 56 76 0F 00            CALL 0x006b4fe0
005BD98A  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005BD98D  50                        PUSH EAX
005BD98E  33 C0                     XOR EAX,EAX
005BD990  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005BD994  50                        PUSH EAX
005BD995  6A 28                     PUSH 0x28
005BD997  68 91 00 00 00            PUSH 0x91
005BD99C  E8 1F 77 0F 00            CALL 0x006b50c0
005BD9A1  89 43 77                  MOV dword ptr [EBX + 0x77],EAX
005BD9A4  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005BD9A7  56                        PUSH ESI
005BD9A8  8D 48 28                  LEA ECX,[EAX + 0x28]
005BD9AB  51                        PUSH ECX
005BD9AC  50                        PUSH EAX
005BD9AD  E8 2E 76 0F 00            CALL 0x006b4fe0
005BD9B2  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005BD9B5  50                        PUSH EAX
005BD9B6  33 C0                     XOR EAX,EAX
005BD9B8  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005BD9BC  50                        PUSH EAX
005BD9BD  6A 1E                     PUSH 0x1e
005BD9BF  68 2C 01 00 00            PUSH 0x12c
005BD9C4  E8 F7 76 0F 00            CALL 0x006b50c0
005BD9C9  89 43 7B                  MOV dword ptr [EBX + 0x7b],EAX
005BD9CC  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
005BD9CF  56                        PUSH ESI
005BD9D0  8D 48 28                  LEA ECX,[EAX + 0x28]
005BD9D3  51                        PUSH ECX
005BD9D4  50                        PUSH EAX
005BD9D5  E8 06 76 0F 00            CALL 0x006b4fe0
005BD9DA  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005BD9DD  50                        PUSH EAX
005BD9DE  33 C0                     XOR EAX,EAX
005BD9E0  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005BD9E4  50                        PUSH EAX
005BD9E5  68 5E 01 00 00            PUSH 0x15e
005BD9EA  68 E9 02 00 00            PUSH 0x2e9
005BD9EF  E8 CC 76 0F 00            CALL 0x006b50c0
005BD9F4  68 FF 00 00 01            PUSH 0x10000ff
005BD9F9  68 5E 01 00 00            PUSH 0x15e
005BD9FE  68 E9 02 00 00            PUSH 0x2e9
005BDA03  57                        PUSH EDI
005BDA04  57                        PUSH EDI
005BDA05  57                        PUSH EDI
005BDA06  50                        PUSH EAX
005BDA07  89 43 73                  MOV dword ptr [EBX + 0x73],EAX
005BDA0A  E8 61 67 0F 00            CALL 0x006b4170
005BDA0F  8B 4B 73                  MOV ECX,dword ptr [EBX + 0x73]
005BDA12  6A 0D                     PUSH 0xd
005BDA14  6A 18                     PUSH 0x18
005BDA16  68 5E 01 00 00            PUSH 0x15e
005BDA1B  68 BC 02 00 00            PUSH 0x2bc
005BDA20  57                        PUSH EDI
005BDA21  6A 2D                     PUSH 0x2d
005BDA23  57                        PUSH EDI
005BDA24  51                        PUSH ECX
005BDA25  E8 B6 84 0F 00            CALL 0x006b5ee0
005BDA2A  8D B3 A3 00 00 00         LEA ESI,[EBX + 0xa3]
005BDA30  8D 95 60 F9 FF FF         LEA EDX,[EBP + 0xfffff960]
005BDA36  56                        PUSH ESI
005BDA37  6A 10                     PUSH 0x10
005BDA39  6A 1A                     PUSH 0x1a
005BDA3B  68 00 01 00 00            PUSH 0x100
005BDA40  57                        PUSH EDI
005BDA41  52                        PUSH EDX
005BDA42  E8 39 AD 15 00            CALL 0x00718780
005BDA47  8D 83 A3 01 00 00         LEA EAX,[EBX + 0x1a3]
005BDA4D  8D 8D 60 F9 FF FF         LEA ECX,[EBP + 0xfffff960]
005BDA53  50                        PUSH EAX
005BDA54  6A 10                     PUSH 0x10
005BDA56  6A 2E                     PUSH 0x2e
005BDA58  68 00 01 00 00            PUSH 0x100
005BDA5D  57                        PUSH EDI
005BDA5E  51                        PUSH ECX
005BDA5F  E8 1C AD 15 00            CALL 0x00718780
005BDA64  B9 20 00 00 00            MOV ECX,0x20
005BDA69  33 C0                     XOR EAX,EAX
005BDA6B  8D BB C7 02 00 00         LEA EDI,[EBX + 0x2c7]
005BDA71  83 C4 30                  ADD ESP,0x30
005BDA74  F3 AB                     STOSD.REP ES:EDI
005BDA76  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005BDA79  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005BDA7C  89 B3 23 03 00 00         MOV dword ptr [EBX + 0x323],ESI
005BDA82  8B B3 87 00 00 00         MOV ESI,dword ptr [EBX + 0x87]
005BDA88  BF 02 00 00 00            MOV EDI,0x2
005BDA8D  89 83 EF 02 00 00         MOV dword ptr [EBX + 0x2ef],EAX
005BDA93  89 83 CF 02 00 00         MOV dword ptr [EBX + 0x2cf],EAX
005BDA99  89 BB F3 02 00 00         MOV dword ptr [EBX + 0x2f3],EDI
005BDA9F  89 BB D3 02 00 00         MOV dword ptr [EBX + 0x2d3],EDI
005BDAA5  89 93 13 03 00 00         MOV dword ptr [EBX + 0x313],EDX
005BDAAB  C7 83 1B 03 00 00 18 00 00 00  MOV dword ptr [EBX + 0x31b],0x18
005BDAB5  C7 83 17 03 00 00 4C 00 00 00  MOV dword ptr [EBX + 0x317],0x4c
005BDABF  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005BDAC5  85 C0                     TEST EAX,EAX
005BDAC7  74 09                     JZ 0x005bdad2
005BDAC9  56                        PUSH ESI
005BDACA  E8 C1 2C 15 00            CALL 0x00710790
005BDACF  83 C4 04                  ADD ESP,0x4
LAB_005bdad2:
005BDAD2  8A 43 66                  MOV AL,byte ptr [EBX + 0x66]
005BDAD5  8B B6 8A 00 00 00         MOV ESI,dword ptr [ESI + 0x8a]
005BDADB  3C 01                     CMP AL,0x1
005BDADD  89 B3 0B 03 00 00         MOV dword ptr [EBX + 0x30b],ESI
005BDAE3  0F 85 46 02 00 00         JNZ 0x005bdd2f
005BDAE9  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
005BDAF0  81 C3 47 03 00 00         ADD EBX,0x347
005BDAF6  BE 03 00 00 00            MOV ESI,0x3
LAB_005bdafb:
005BDAFB  6A 18                     PUSH 0x18
005BDAFD  6A 04                     PUSH 0x4
005BDAFF  6A 18                     PUSH 0x18
005BDB01  6A 00                     PUSH 0x0
005BDB03  E8 88 07 0F 00            CALL 0x006ae290
005BDB08  89 03                     MOV dword ptr [EBX],EAX
005BDB0A  83 C3 04                  ADD EBX,0x4
005BDB0D  4E                        DEC ESI
005BDB0E  75 EB                     JNZ 0x005bdafb
005BDB10  A1 D8 C0 79 00            MOV EAX,[0x0079c0d8]
005BDB15  8B 0D D4 C0 79 00         MOV ECX,dword ptr [0x0079c0d4]
005BDB1B  50                        PUSH EAX
005BDB1C  68 DD 7D 80 00            PUSH 0x807ddd
005BDB21  51                        PUSH ECX
005BDB22  68 80 76 80 00            PUSH 0x807680
005BDB27  68 EC A1 7C 00            PUSH 0x7ca1ec
005BDB2C  68 3A F3 80 00            PUSH 0x80f33a
005BDB31  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BDB37  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
005BDB3D  8D 8D 68 FF FF FF         LEA ECX,[EBP + 0xffffff68]
005BDB43  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
005BDB49  6A 00                     PUSH 0x0
005BDB4B  51                        PUSH ECX
005BDB4C  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
005BDB52  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005BDB57  E8 94 FC 16 00            CALL 0x0072d7f0
005BDB5C  83 C4 20                  ADD ESP,0x20
005BDB5F  85 C0                     TEST EAX,EAX
005BDB61  75 27                     JNZ 0x005bdb8a
005BDB63  50                        PUSH EAX
005BDB64  50                        PUSH EAX
005BDB65  50                        PUSH EAX
005BDB66  68 3A F3 80 00            PUSH 0x80f33a
005BDB6B  68 45 03 00 00            PUSH 0x345
005BDB70  E8 4B 33 13 00            CALL 0x006f0ec0
005BDB75  8B D0                     MOV EDX,EAX
005BDB77  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
005BDB7D  83 C4 14                  ADD ESP,0x14
005BDB80  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005BDB83  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005BDB88  EB 0F                     JMP 0x005bdb99
LAB_005bdb8a:
005BDB8A  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
005BDB90  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005BDB93  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_005bdb99:
005BDB99  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005BDB9C  85 D2                     TEST EDX,EDX
005BDB9E  0F 84 DD 00 00 00         JZ 0x005bdc81
005BDBA4  B9 80 00 00 00            MOV ECX,0x80
005BDBA9  33 C0                     XOR EAX,EAX
005BDBAB  8D BD 60 FD FF FF         LEA EDI,[EBP + 0xfffffd60]
005BDBB1  8D B5 61 FD FF FF         LEA ESI,[EBP + 0xfffffd61]
005BDBB7  F3 AB                     STOSD.REP ES:EDI
005BDBB9  AA                        STOSB ES:EDI
005BDBBA  8B 3D DC C0 79 00         MOV EDI,dword ptr [0x0079c0dc]
005BDBC0  83 C9 FF                  OR ECX,0xffffffff
005BDBC3  33 C0                     XOR EAX,EAX
005BDBC5  C6 85 60 FD FF FF 0C      MOV byte ptr [EBP + 0xfffffd60],0xc
005BDBCC  F2 AE                     SCASB.REPNE ES:EDI
005BDBCE  F7 D1                     NOT ECX
005BDBD0  2B F9                     SUB EDI,ECX
005BDBD2  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005BDBD5  8B C1                     MOV EAX,ECX
005BDBD7  8B F7                     MOV ESI,EDI
005BDBD9  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005BDBDC  C1 E9 02                  SHR ECX,0x2
005BDBDF  F3 A5                     MOVSD.REP ES:EDI,ESI
005BDBE1  8B C8                     MOV ECX,EAX
005BDBE3  83 E1 03                  AND ECX,0x3
005BDBE6  F3 A4                     MOVSB.REP ES:EDI,ESI
005BDBE8  8D 8D 60 FD FF FF         LEA ECX,[EBP + 0xfffffd60]
005BDBEE  51                        PUSH ECX
005BDBEF  68 10 2D 6F 00            PUSH 0x6f2d10
005BDBF4  8B CA                     MOV ECX,EDX
005BDBF6  E8 B5 36 13 00            CALL 0x006f12b0
005BDBFB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005BDBFE  8B CF                     MOV ECX,EDI
005BDC00  E8 8B 4B 13 00            CALL 0x006f2790
005BDC05  8B F0                     MOV ESI,EAX
005BDC07  33 C0                     XOR EAX,EAX
005BDC09  3B F0                     CMP ESI,EAX
005BDC0B  74 6B                     JZ 0x005bdc78
005BDC0D  EB 02                     JMP 0x005bdc11
LAB_005bdc0f:
005BDC0F  33 C0                     XOR EAX,EAX
LAB_005bdc11:
005BDC11  8B 15 DC C0 79 00         MOV EDX,dword ptr [0x0079c0dc]
005BDC17  68 40 CF 7C 00            PUSH 0x7ccf40
005BDC1C  52                        PUSH EDX
005BDC1D  68 E4 6E 7C 00            PUSH 0x7c6ee4
005BDC22  68 3A F3 80 00            PUSH 0x80f33a
005BDC27  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005BDC2A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BDC2D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005BDC33  8D 45 F8                  LEA EAX,[EBP + -0x8]
005BDC36  8D 4D F4                  LEA ECX,[EBP + -0xc]
005BDC39  50                        PUSH EAX
005BDC3A  51                        PUSH ECX
005BDC3B  68 3A F3 80 00            PUSH 0x80f33a
005BDC40  56                        PUSH ESI
005BDC41  E8 3A 12 17 00            CALL 0x0072ee80
005BDC46  83 C4 20                  ADD ESP,0x20
005BDC49  83 F8 02                  CMP EAX,0x2
005BDC4C  75 1D                     JNZ 0x005bdc6b
005BDC4E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005BDC51  85 C0                     TEST EAX,EAX
005BDC53  76 16                     JBE 0x005bdc6b
005BDC55  83 F8 04                  CMP EAX,0x4
005BDC58  73 11                     JNC 0x005bdc6b
005BDC5A  8B 84 83 43 03 00 00      MOV EAX,dword ptr [EBX + EAX*0x4 + 0x343]
005BDC61  8D 55 F8                  LEA EDX,[EBP + -0x8]
005BDC64  52                        PUSH EDX
005BDC65  50                        PUSH EAX
005BDC66  E8 55 05 0F 00            CALL 0x006ae1c0
LAB_005bdc6b:
005BDC6B  8B CF                     MOV ECX,EDI
005BDC6D  E8 1E 4B 13 00            CALL 0x006f2790
005BDC72  8B F0                     MOV ESI,EAX
005BDC74  85 F6                     TEST ESI,ESI
005BDC76  75 97                     JNZ 0x005bdc0f
LAB_005bdc78:
005BDC78  57                        PUSH EDI
005BDC79  E8 F2 34 13 00            CALL 0x006f1170
005BDC7E  83 C4 04                  ADD ESP,0x4
LAB_005bdc81:
005BDC81  8D 83 47 03 00 00         LEA EAX,[EBX + 0x347]
005BDC87  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005BDC8E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BDC91  C7 45 F4 03 00 00 00      MOV dword ptr [EBP + -0xc],0x3
LAB_005bdc98:
005BDC98  8B 08                     MOV ECX,dword ptr [EAX]
005BDC9A  33 D2                     XOR EDX,EDX
005BDC9C  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005BDC9F  49                        DEC ECX
005BDCA0  85 C9                     TEST ECX,ECX
005BDCA2  7E 50                     JLE 0x005bdcf4
LAB_005bdca4:
005BDCA4  8B 00                     MOV EAX,dword ptr [EAX]
005BDCA6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005BDCA9  3B D1                     CMP EDX,ECX
005BDCAB  73 0D                     JNC 0x005bdcba
005BDCAD  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005BDCB0  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
005BDCB3  0F AF F2                  IMUL ESI,EDX
005BDCB6  03 F7                     ADD ESI,EDI
005BDCB8  EB 02                     JMP 0x005bdcbc
LAB_005bdcba:
005BDCBA  33 F6                     XOR ESI,ESI
LAB_005bdcbc:
005BDCBC  8D 7A 01                  LEA EDI,[EDX + 0x1]
005BDCBF  3B F9                     CMP EDI,ECX
005BDCC1  73 0B                     JNC 0x005bdcce
005BDCC3  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005BDCC6  0F AF CF                  IMUL ECX,EDI
005BDCC9  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
005BDCCC  EB 02                     JMP 0x005bdcd0
LAB_005bdcce:
005BDCCE  33 C9                     XOR ECX,ECX
LAB_005bdcd0:
005BDCD0  8B 36                     MOV ESI,dword ptr [ESI]
005BDCD2  3B 31                     CMP ESI,dword ptr [ECX]
005BDCD4  76 0F                     JBE 0x005bdce5
005BDCD6  57                        PUSH EDI
005BDCD7  52                        PUSH EDX
005BDCD8  50                        PUSH EAX
005BDCD9  E8 F2 2F 0F 00            CALL 0x006b0cd0
005BDCDE  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_005bdce5:
005BDCE5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005BDCE8  8B D7                     MOV EDX,EDI
005BDCEA  8B 08                     MOV ECX,dword ptr [EAX]
005BDCEC  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
005BDCEF  49                        DEC ECX
005BDCF0  3B D1                     CMP EDX,ECX
005BDCF2  7C B0                     JL 0x005bdca4
LAB_005bdcf4:
005BDCF4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005BDCF7  83 C0 04                  ADD EAX,0x4
005BDCFA  49                        DEC ECX
005BDCFB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005BDCFE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005BDD01  75 95                     JNZ 0x005bdc98
005BDD03  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BDD06  85 C0                     TEST EAX,EAX
005BDD08  0F 85 73 FF FF FF         JNZ 0x005bdc81
005BDD0E  B8 02 00 00 00            MOV EAX,0x2
005BDD13  8D 8B 4F 03 00 00         LEA ECX,[EBX + 0x34f]
LAB_005bdd19:
005BDD19  8B 11                     MOV EDX,dword ptr [ECX]
005BDD1B  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005BDD1E  85 F6                     TEST ESI,ESI
005BDD20  76 03                     JBE 0x005bdd25
005BDD22  88 43 6A                  MOV byte ptr [EBX + 0x6a],AL
LAB_005bdd25:
005BDD25  48                        DEC EAX
005BDD26  83 E9 04                  SUB ECX,0x4
005BDD29  85 C0                     TEST EAX,EAX
005BDD2B  7D EC                     JGE 0x005bdd19
005BDD2D  EB 24                     JMP 0x005bdd53
LAB_005bdd2f:
005BDD2F  A0 A0 67 80 00            MOV AL,[0x008067a0]
005BDD34  84 C0                     TEST AL,AL
005BDD36  74 17                     JZ 0x005bdd4f
005BDD38  A1 22 C5 80 00            MOV EAX,[0x0080c522]
005BDD3D  B9 90 2A 80 00            MOV ECX,0x802a90
005BDD42  F7 D8                     NEG EAX
005BDD44  1B C0                     SBB EAX,EAX
005BDD46  03 C7                     ADD EAX,EDI
005BDD48  50                        PUSH EAX
005BDD49  FF 15 60 C0 85 00         CALL dword ptr [0x0085c060]
LAB_005bdd4f:
005BDD4F  C6 43 67 01               MOV byte ptr [EBX + 0x67],0x1
LAB_005bdd53:
005BDD53  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005BDD59  BE 01 00 00 00            MOV ESI,0x1
005BDD5E  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005BDD64  85 C9                     TEST ECX,ECX
005BDD66  74 0A                     JZ 0x005bdd72
005BDD68  56                        PUSH ESI
005BDD69  6A 00                     PUSH 0x0
005BDD6B  6A 00                     PUSH 0x0
005BDD6D  E8 33 42 E4 FF            CALL 0x00401fa5
LAB_005bdd72:
005BDD72  6A 00                     PUSH 0x0
005BDD74  8B CB                     MOV ECX,EBX
005BDD76  E8 F1 34 E4 FF            CALL 0x0040126c
005BDD7B  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
005BDD7E  52                        PUSH EDX
005BDD7F  56                        PUSH ESI
005BDD80  6A 00                     PUSH 0x0
005BDD82  6A 00                     PUSH 0x0
005BDD84  E8 AF 59 E4 FF            CALL 0x00403738
005BDD89  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005BDD8E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDD94  83 C4 10                  ADD ESP,0x10
005BDD97  05 40 01 00 00            ADD EAX,0x140
005BDD9C  8D 4D FC                  LEA ECX,[EBP + -0x4]
005BDD9F  83 CF FF                  OR EDI,0xffffffff
005BDDA2  50                        PUSH EAX
005BDDA3  68 5E 01 00 00            PUSH 0x15e
005BDDA8  68 BD 02 00 00            PUSH 0x2bd
005BDDAD  68 99 30 40 00            PUSH 0x403099
005BDDB2  6A 32                     PUSH 0x32
005BDDB4  51                        PUSH ECX
005BDDB5  52                        PUSH EDX
005BDDB6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005BDDB9  E8 72 45 0F 00            CALL 0x006b2330
005BDDBE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BDDC1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BDDC7  6A 46                     PUSH 0x46
005BDDC9  6A 47                     PUSH 0x47
005BDDCB  57                        PUSH EDI
005BDDCC  50                        PUSH EAX
005BDDCD  51                        PUSH ECX
005BDDCE  E8 6D 58 0F 00            CALL 0x006b3640
005BDDD3  6A 33                     PUSH 0x33
005BDDD5  E8 56 07 17 00            CALL 0x0072e530
005BDDDA  33 C9                     XOR ECX,ECX
005BDDDC  83 C4 04                  ADD ESP,0x4
005BDDDF  3B C1                     CMP EAX,ECX
005BDDE1  74 2D                     JZ 0x005bde10
005BDDE3  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BDDE7  88 08                     MOV byte ptr [EAX],CL
005BDDE9  89 78 03                  MOV dword ptr [EAX + 0x3],EDI
005BDDEC  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005BDDF0  89 48 07                  MOV dword ptr [EAX + 0x7],ECX
005BDDF3  89 48 0B                  MOV dword ptr [EAX + 0xb],ECX
005BDDF6  89 48 0F                  MOV dword ptr [EAX + 0xf],ECX
005BDDF9  89 70 1B                  MOV dword ptr [EAX + 0x1b],ESI
005BDDFC  89 70 13                  MOV dword ptr [EAX + 0x13],ESI
005BDDFF  89 78 17                  MOV dword ptr [EAX + 0x17],EDI
005BDE02  89 48 27                  MOV dword ptr [EAX + 0x27],ECX
005BDE05  89 48 23                  MOV dword ptr [EAX + 0x23],ECX
005BDE08  89 70 2F                  MOV dword ptr [EAX + 0x2f],ESI
005BDE0B  89 70 2B                  MOV dword ptr [EAX + 0x2b],ESI
005BDE0E  EB 02                     JMP 0x005bde12
LAB_005bde10:
005BDE10  33 C0                     XOR EAX,EAX
LAB_005bde12:
005BDE12  3B C1                     CMP EAX,ECX
005BDE14  89 83 53 04 00 00         MOV dword ptr [EBX + 0x453],EAX
005BDE1A  74 5F                     JZ 0x005bde7b
005BDE1C  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDE22  51                        PUSH ECX
005BDE23  56                        PUSH ESI
005BDE24  6A 10                     PUSH 0x10
005BDE26  56                        PUSH ESI
005BDE27  68 5E 01 00 00            PUSH 0x15e
005BDE2C  68 BD 02 00 00            PUSH 0x2bd
005BDE31  6A 46                     PUSH 0x46
005BDE33  6A 47                     PUSH 0x47
005BDE35  52                        PUSH EDX
005BDE36  E8 B5 1B 10 00            CALL 0x006bf9f0
005BDE3B  8B 8B 53 04 00 00         MOV ECX,dword ptr [EBX + 0x453]
005BDE41  50                        PUSH EAX
005BDE42  6A 46                     PUSH 0x46
005BDE44  6A 47                     PUSH 0x47
005BDE46  6A 02                     PUSH 0x2
005BDE48  E8 50 67 E4 FF            CALL 0x0040459d
005BDE4D  85 C0                     TEST EAX,EAX
005BDE4F  74 2A                     JZ 0x005bde7b
005BDE51  8B 83 53 04 00 00         MOV EAX,dword ptr [EBX + 0x453]
005BDE57  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005BDE5A  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BDE5E  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005BDE61  8B 83 53 04 00 00         MOV EAX,dword ptr [EBX + 0x453]
005BDE67  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BDE6A  85 C0                     TEST EAX,EAX
005BDE6C  7C 0D                     JL 0x005bde7b
005BDE6E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDE74  50                        PUSH EAX
005BDE75  52                        PUSH EDX
005BDE76  E8 75 5C 0F 00            CALL 0x006b3af0
LAB_005bde7b:
005BDE7B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BDE7E  3B C7                     CMP EAX,EDI
005BDE80  74 0F                     JZ 0x005bde91
005BDE82  50                        PUSH EAX
005BDE83  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BDE88  50                        PUSH EAX
005BDE89  E8 22 5D 0F 00            CALL 0x006b3bb0
005BDE8E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005bde91:
005BDE91  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDE97  53                        PUSH EBX
005BDE98  6A 32                     PUSH 0x32
005BDE9A  68 E9 02 00 00            PUSH 0x2e9
005BDE9F  68 17 12 40 00            PUSH 0x401217
005BDEA4  8D 4D FC                  LEA ECX,[EBP + -0x4]
005BDEA7  6A 32                     PUSH 0x32
005BDEA9  51                        PUSH ECX
005BDEAA  52                        PUSH EDX
005BDEAB  E8 80 44 0F 00            CALL 0x006b2330
005BDEB0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BDEB3  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BDEB9  6A 0A                     PUSH 0xa
005BDEBB  6A 1A                     PUSH 0x1a
005BDEBD  57                        PUSH EDI
005BDEBE  50                        PUSH EAX
005BDEBF  51                        PUSH ECX
005BDEC0  E8 7B 57 0F 00            CALL 0x006b3640
005BDEC5  6A 33                     PUSH 0x33
005BDEC7  E8 64 06 17 00            CALL 0x0072e530
005BDECC  33 C9                     XOR ECX,ECX
005BDECE  83 C4 04                  ADD ESP,0x4
005BDED1  3B C1                     CMP EAX,ECX
005BDED3  74 2D                     JZ 0x005bdf02
005BDED5  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BDED9  88 08                     MOV byte ptr [EAX],CL
005BDEDB  89 78 03                  MOV dword ptr [EAX + 0x3],EDI
005BDEDE  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005BDEE2  89 48 07                  MOV dword ptr [EAX + 0x7],ECX
005BDEE5  89 48 0B                  MOV dword ptr [EAX + 0xb],ECX
005BDEE8  89 48 0F                  MOV dword ptr [EAX + 0xf],ECX
005BDEEB  89 70 1B                  MOV dword ptr [EAX + 0x1b],ESI
005BDEEE  89 70 13                  MOV dword ptr [EAX + 0x13],ESI
005BDEF1  89 78 17                  MOV dword ptr [EAX + 0x17],EDI
005BDEF4  89 48 27                  MOV dword ptr [EAX + 0x27],ECX
005BDEF7  89 48 23                  MOV dword ptr [EAX + 0x23],ECX
005BDEFA  89 70 2F                  MOV dword ptr [EAX + 0x2f],ESI
005BDEFD  89 70 2B                  MOV dword ptr [EAX + 0x2b],ESI
005BDF00  EB 02                     JMP 0x005bdf04
LAB_005bdf02:
005BDF02  33 C0                     XOR EAX,EAX
LAB_005bdf04:
005BDF04  3B C1                     CMP EAX,ECX
005BDF06  89 83 57 04 00 00         MOV dword ptr [EBX + 0x457],EAX
005BDF0C  74 5E                     JZ 0x005bdf6c
005BDF0E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDF14  51                        PUSH ECX
005BDF15  56                        PUSH ESI
005BDF16  6A 10                     PUSH 0x10
005BDF18  56                        PUSH ESI
005BDF19  6A 32                     PUSH 0x32
005BDF1B  68 E9 02 00 00            PUSH 0x2e9
005BDF20  6A 0A                     PUSH 0xa
005BDF22  6A 1A                     PUSH 0x1a
005BDF24  52                        PUSH EDX
005BDF25  E8 C6 1A 10 00            CALL 0x006bf9f0
005BDF2A  8B 8B 57 04 00 00         MOV ECX,dword ptr [EBX + 0x457]
005BDF30  50                        PUSH EAX
005BDF31  6A 0A                     PUSH 0xa
005BDF33  6A 1A                     PUSH 0x1a
005BDF35  6A 03                     PUSH 0x3
005BDF37  E8 61 66 E4 FF            CALL 0x0040459d
005BDF3C  85 C0                     TEST EAX,EAX
005BDF3E  74 2A                     JZ 0x005bdf6a
005BDF40  8B 83 57 04 00 00         MOV EAX,dword ptr [EBX + 0x457]
005BDF46  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005BDF49  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005BDF4D  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005BDF50  8B 83 57 04 00 00         MOV EAX,dword ptr [EBX + 0x457]
005BDF56  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BDF59  85 C0                     TEST EAX,EAX
005BDF5B  7C 0D                     JL 0x005bdf6a
005BDF5D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDF63  50                        PUSH EAX
005BDF64  52                        PUSH EDX
005BDF65  E8 86 5B 0F 00            CALL 0x006b3af0
LAB_005bdf6a:
005BDF6A  33 C9                     XOR ECX,ECX
LAB_005bdf6c:
005BDF6C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005BDF6F  3B C7                     CMP EAX,EDI
005BDF71  74 0E                     JZ 0x005bdf81
005BDF73  50                        PUSH EAX
005BDF74  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005BDF79  50                        PUSH EAX
005BDF7A  E8 31 5C 0F 00            CALL 0x006b3bb0
005BDF7F  33 C9                     XOR ECX,ECX
LAB_005bdf81:
005BDF81  51                        PUSH ECX
005BDF82  8B 4B 5D                  MOV ECX,dword ptr [EBX + 0x5d]
005BDF85  C6 43 65 03               MOV byte ptr [EBX + 0x65],0x3
005BDF89  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDF8F  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005BDF94  6A 02                     PUSH 0x2
005BDF96  6A 0A                     PUSH 0xa
005BDF98  51                        PUSH ECX
005BDF99  52                        PUSH EDX
005BDF9A  50                        PUSH EAX
005BDF9B  E8 EA 64 E4 FF            CALL 0x0040448a
005BDFA0  8B 83 57 04 00 00         MOV EAX,dword ptr [EBX + 0x457]
005BDFA6  83 C4 18                  ADD ESP,0x18
005BDFA9  85 C0                     TEST EAX,EAX
005BDFAB  74 19                     JZ 0x005bdfc6
005BDFAD  80 38 00                  CMP byte ptr [EAX],0x0
005BDFB0  74 14                     JZ 0x005bdfc6
005BDFB2  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005BDFB5  85 C0                     TEST EAX,EAX
005BDFB7  7C 0D                     JL 0x005bdfc6
005BDFB9  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005BDFBF  50                        PUSH EAX
005BDFC0  51                        PUSH ECX
005BDFC1  E8 6A 54 0F 00            CALL 0x006b3430
LAB_005bdfc6:
005BDFC6  8B 9B 53 04 00 00         MOV EBX,dword ptr [EBX + 0x453]
005BDFCC  85 DB                     TEST EBX,EBX
005BDFCE  74 19                     JZ 0x005bdfe9
005BDFD0  80 3B 00                  CMP byte ptr [EBX],0x0
005BDFD3  74 14                     JZ 0x005bdfe9
005BDFD5  8B 5B 03                  MOV EBX,dword ptr [EBX + 0x3]
005BDFD8  85 DB                     TEST EBX,EBX
005BDFDA  7C 0D                     JL 0x005bdfe9
005BDFDC  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005BDFE2  53                        PUSH EBX
005BDFE3  52                        PUSH EDX
005BDFE4  E8 47 54 0F 00            CALL 0x006b3430
LAB_005bdfe9:
005BDFE9  8B 35 30 2A 80 00         MOV ESI,dword ptr [0x00802a30]
005BDFEF  85 F6                     TEST ESI,ESI
005BDFF1  74 49                     JZ 0x005be03c
005BDFF3  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
005BDFF9  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
005BDFFF  50                        PUSH EAX
005BE000  51                        PUSH ECX
005BE001  6A 00                     PUSH 0x0
005BE003  8B CE                     MOV ECX,ESI
005BE005  C6 86 93 04 00 00 03      MOV byte ptr [ESI + 0x493],0x3
005BE00C  66 C7 86 94 04 00 00 FF FF  MOV word ptr [ESI + 0x494],0xffff
005BE015  E8 64 70 E4 FF            CALL 0x0040507e
005BE01A  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
005BE020  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
005BE026  52                        PUSH EDX
005BE027  50                        PUSH EAX
005BE028  8B CE                     MOV ECX,ESI
005BE02A  E8 EF 43 E4 FF            CALL 0x0040241e
005BE02F  C6 86 D2 00 00 00 00      MOV byte ptr [ESI + 0xd2],0x0
005BE036  89 BE DF 04 00 00         MOV dword ptr [ESI + 0x4df],EDI
LAB_005be03c:
005BE03C  6A 00                     PUSH 0x0
005BE03E  B9 58 76 80 00            MOV ECX,0x807658
005BE043  E8 54 52 E4 FF            CALL 0x0040329c
005BE048  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
005BE04F  74 12                     JZ 0x005be063
005BE051  6A 00                     PUSH 0x0
005BE053  6A 00                     PUSH 0x0
005BE055  6A 02                     PUSH 0x2
005BE057  6A 14                     PUSH 0x14
005BE059  B9 58 76 80 00            MOV ECX,0x807658
005BE05E  E8 6E 4F E4 FF            CALL 0x00402fd1
LAB_005be063:
005BE063  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
005BE066  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BE06C  5F                        POP EDI
005BE06D  5E                        POP ESI
005BE06E  5B                        POP EBX
005BE06F  8B E5                     MOV ESP,EBP
005BE071  5D                        POP EBP
005BE072  C2 04 00                  RET 0x4
LAB_005be075:
005BE075  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
005BE078  68 24 CF 7C 00            PUSH 0x7ccf24
005BE07D  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BE082  56                        PUSH ESI
005BE083  57                        PUSH EDI
005BE084  68 C6 00 00 00            PUSH 0xc6
005BE089  68 C8 CE 7C 00            PUSH 0x7ccec8
005BE08E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BE094  E8 37 F4 0E 00            CALL 0x006ad4d0
005BE099  83 C4 18                  ADD ESP,0x18
005BE09C  85 C0                     TEST EAX,EAX
005BE09E  74 01                     JZ 0x005be0a1
005BE0A0  CC                        INT3
LAB_005be0a1:
005BE0A1  68 C6 00 00 00            PUSH 0xc6
005BE0A6  68 C8 CE 7C 00            PUSH 0x7ccec8
005BE0AB  57                        PUSH EDI
005BE0AC  56                        PUSH ESI
005BE0AD  E8 8E 7D 0E 00            CALL 0x006a5e40
005BE0B2  5F                        POP EDI
005BE0B3  5E                        POP ESI
005BE0B4  5B                        POP EBX
005BE0B5  8B E5                     MOV ESP,EBP
005BE0B7  5D                        POP EBP
005BE0B8  C2 04 00                  RET 0x4
