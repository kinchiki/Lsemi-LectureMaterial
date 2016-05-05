class Creature
  def initialize(name="不明", age=20, weight=60.0, kind="不明")
    @name = name
    @age = age
    @weight = weight
    @kind = kind
  end

  #  attr_accessor :name
  def name
    @name
  end

  def setName(newName)
    @name = newName
  end

  def showData
    puts "名前:#{@name}, 年齢:#{@age}, 身長:#{@height}, 体重:#{@weight}, 種類:#{@kind}"
  end
end


class Person < Creature

  def initialize(name="佐藤", age=20, weight=60.0, kind="人間", height=165.0, job="サラリーマン")
    super(name,age,weight,kind) #super だけだと引数をそのまま渡す ()付けると引数を渡さない
    @height = height
    @job = job
  end

  def showData
    puts "名前:#{@name}, 年齢:#{@age}, 身長:#{@height}, 体重:#{@weight}, 種類:#{@kind}, 職業:#{@job}"
  end

  def laugh
    puts "( ﾟ∀ﾟ)ｱﾊﾊハハ八八ﾉヽﾉヽノヽノ＼/＼"
  end

end
#name="佐藤", age=20, height=165, weight=60, kind="人間"
#("サイタマ", 25, 175, 70, "人間")

mob = Person.new()
mob.showData()

saitama = Person.new("サイタマ", 25, 175, 70, "人間", "ヒーロー")
saitama.showData()
saitama.laugh()
