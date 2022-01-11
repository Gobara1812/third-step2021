rika =  [65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70]
eng = [44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

def std(sub_x)
  avg = sub_x.sum / sub_x.size
  arrl = sub_x.map{ |x|(x - avg) ** 2 }
  return Math.sqrt(arrl.sum / sub_x.length.round(2))
end

def dev(sub_x)
  avg = sub_x.sum / sub_x.length
  arr1 = sub_x.map{|x| (x - avg) ** 2}
  std = Math.sqrt(arr1.sum / sub_x.length)
  return sub_x.map{|x| ((x - avg) * 10 / std + 50).round(2)}
end

p "平均点"
p "理科"
p rika.sum.to_f / rika.size.to_f
p "英語"
p eng.sum.to_f / eng.size.to_f

p "標準偏差"
p "理科"
p std(rika)
p "英語"
p std(eng)

p "合計点"
p "理科"
p rika.sum
p "英語"
p eng.sum

p "偏差値"
p "理科"
p dev(rika)
p "英語"
p dev(eng)

p "降順"
p "理科"
p rika.sort.reverse
p "英語"
p eng.sort.reverse
